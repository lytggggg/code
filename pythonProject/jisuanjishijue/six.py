# # #
# # #
# # import cv2
# # import numpy as np
# #
# #
# # def fangda_or_suoxiao(img, scale):
# #     width = img.shape[1]
# #     height = img.shape[0]
# #     new_width = int(width * scale)
# #     new_height = int(height * scale)
# #     new_img = np.zeros((new_width, new_height, img.shape[2]), np.uint8)
# #
# #     for i in range(0, new_height):
# #         for j in range(0, new_width):
# #             x = int(i * (height / new_height))
# #             y = int(j * (width / new_width))
# #             new_img[i, j] = img[x, y]
# #     return new_img
# #
# #
# # def zh_ch(string):
# #     return string.encode("gbk").decode(errors="ignore")
# #
# #
# # img = cv2.imread("f:\\qq.png")
# # cv2.imshow(zh_ch("原图"), img)
# #
# # cv2.imshow("img * 0.5", fangda_or_suoxiao(img, 0.5))
# # cv2.imshow("img * 1.3", fangda_or_suoxiao(img, 1.3))
# # cv2.waitKey(0)
# # # import cv2
# # # import numpy as np
# # #
# # # def xuanzhuan(img, angle):
# # #     angle = angle * np.pi / 180
# # #     # 读取库图片 Attention 转换 默认为int8 运算时可能会溢出
# # #
# # #     # 设置新的图像大小
# # #     h, w = img.shape[0], img.shape[1]
# # #     newW = int(w * abs(np.cos(angle)) + h * abs(np.sin(angle))) + 1
# # #     newH = int(w * abs(np.sin(angle)) + h * abs(np.cos(angle))) + 1
# # #     newimg3 = np.zeros((newH, newW, 3), dtype=np.uint8)
# # #     # 设置旋转矩阵 scr -> dex
# # #     trans2 = np.array([[1, 0, 0], [0, -1, 0], [-0.5 * newW, 0.5 * newH, 1]])
# # #     trans2 = trans2.dot(np.array([[np.cos(angle), np.sin(angle), 0], [-np.sin(angle), np.cos(angle), 0], [0, 0, 1]]))
# # #     trans2 = trans2.dot(np.array([[1, 0, 0], [0, -1, 0], [0.5 * w, 0.5 * h, 1]]))
# # #     # 开始旋转
# # #
# # #     for x in range(newW):
# # #         for y in range(newH):
# # #             srcPos = np.array([x, y, 1]).dot(trans2)
# # #             if srcPos[0] >= 0 and srcPos[0] < w and srcPos[1] >= 0 and srcPos[1] < h:
# # #                 # 最邻近内插
# # #                 # 双线性内插
# # #                 bix, biy = int(srcPos[0]), int(srcPos[1])  # 取左上角坐标
# # #                 # 避免最后一行溢出
# # #                 if bix < w - 1 and biy < h - 1:
# # #                     # 沿 X 方向线性内插
# # #                     rgbX1 = img[biy][bix] + (img[biy][bix + 1] - img[biy][bix]) * (srcPos[0] - bix)
# # #                     rgbX2 = img[biy + 1][bix] + (img[biy + 1][bix + 1] - img[biy + 1][bix]) * (srcPos[0] - bix)
# # #                     # 沿 Y  方向内插
# # #                     rgb = rgbX1 + (rgbX2 - rgbX1) * (srcPos[1] - biy)
# # #                     newimg3[y][x] = rgb
# # #     cv2.imwrite("xuanzhuan.png", newimg3)
# # #     return newimg3
# #
# #
import cv2
import math
import numpy as np


def xuanzhuan(img):
    height, width = img.shape[:2]
    if img.ndim == 3:
        channel = 3
    else:
        channel = None
    angle = 30
    if int(angle / 90) % 2 == 0:
        reshape_angle = angle % 90
    else:
        reshape_angle = 90 - (angle % 90)
    reshape_radian = math.radians(reshape_angle)
    new_height = math.ceil(height * np.cos(reshape_radian) + width * np.sin(reshape_radian))
    new_width = math.ceil(width * np.cos(reshape_radian) + height * np.sin(reshape_radian))
    if channel:
        new_img = np.zeros((new_height, new_width, channel), dtype=np.uint8)
    else:
        new_img = np.zeros((new_height, new_width), dtype=np.uint8)
    radian = math.radians(angle)
    cos_radian = np.cos(radian)
    sin_radian = np.sin(radian)
    dx = 0.5 * new_width + 0.5 * height * sin_radian - 0.5 * width * cos_radian
    dy = 0.5 * new_height - 0.5 * width * sin_radian - 0.5 * height * cos_radian
    dx_back = 0.5 * width - 0.5 * new_width * cos_radian - 0.5 * new_height * sin_radian
    dy_back = 0.5 * height + 0.5 * new_width * sin_radian - 0.5 * new_height * cos_radian
    if channel:
        fill_height = np.zeros((height, 2, channel), dtype=np.uint8)
        fill_width = np.zeros((2, width + 2, channel), dtype=np.uint8)
    else:
        fill_height = np.zeros((height, 2), dtype=np.uint8)
        fill_width = np.zeros((2, width + 2), dtype=np.uint8)
    img_copy = img.copy()
    img_copy = np.concatenate((img_copy, fill_height), axis=1)
    img_copy = np.concatenate((img_copy, fill_width), axis=0)
    for y in range(new_height):
        for x in range(new_width):
            x0 = x * cos_radian + y * sin_radian + dx_back
            y0 = y * cos_radian - x * sin_radian + dy_back
            x_low, y_low = int(x0), int(y0)
            x_up, y_up = x_low + 1, y_low + 1
            u, v = math.modf(x0)[0], math.modf(y0)[0]
            x1, y1 = x_low, y_low
            x2, y2 = x_up, y_low
            x3, y3 = x_low, y_up
            x4, y4 = x_up, y_up
            if 0 < int(x0) <= width and 0 < int(y0) <= height:
                pixel = (1 - u) * (1 - v) * img_copy[y1, x1] + (1 - u) * v * img_copy[y2, x2] + u * (1 - v) * img_copy[
                    y3, x3] + u * v * img_copy[y4, x4]
                new_img[int(y), int(x)] = pixel
    cv2.imwrite('new_img.jpg', new_img)
    return new_img

# cv2.imshow('res', new_img)
# cv2.waitKey()
# cv2.destroyAllWindows()
# --*-- encoding: utf-8 --*--
'''
Date: 2018.09.13
Content: python3 实现双线性插值图像缩放算法
'''

# import numpy as np
# import cv2
# import math
#
# def bi_linear(src, dst, target_size):
#     pic = cv2.imread(src)       # 读取输入图像
#     th, tw = target_size[0], target_size[1]
#     emptyImage = np.zeros(target_size, np.uint8)
#     for k in range(3):
#         for i in range(th):
#             for j in range(tw):
#                 # 首先找到在原图中对应的点的(X, Y)坐标
#                 corr_x = (i+0.5)/th*pic.shape[0]-0.5
#                 corr_y = (j+0.5)/tw*pic.shape[1]-0.5
#                 # if i*pic.shape[0]%th==0 and j*pic.shape[1]%tw==0:     # 对应的点正好是一个像素点，直接拷贝
#                 #   emptyImage[i, j, k] = pic[int(corr_x), int(corr_y), k]
#                 point1 = (math.floor(corr_x), math.floor(corr_y))   # 左上角的点
#                 point2 = (point1[0], point1[1]+1)
#                 point3 = (point1[0]+1, point1[1])
#                 point4 = (point1[0]+1, point1[1]+1)
#
#                 fr1 = (point2[1]-corr_y)*pic[point1[0], point1[1], k] + (corr_y-point1[1])*pic[point2[0], point2[1], k]
#                 fr2 = (point2[1]-corr_y)*pic[point3[0], point3[1], k] + (corr_y-point1[1])*pic[point4[0], point4[1], k]
#                 emptyImage[i, j, k] = (point3[0]-corr_x)*fr1 + (corr_x-point1[0])*fr2
#
#    # cv2.imwrite(dst, emptyImage)
#     # 用 CV2 resize函数得到的缩放图像
#     # new_img = cv2.resize(pic, (200, 300))
#     # cv2.imwrite('pic/1_cv_img.png', new_img)
#     return emptyImage
#
# def main():
#     src = 'f:\\qq.png'
#     dst = 'f:\\qq.png'
#     target_size = (300, 500, 3)     # 变换后的图像大小
#     cv2.imshow("img",cv2.imread(src))
#     cv2.imshow("500*300",bi_linear(src, dst, target_size))
#     cv2.waitKey(0)
#
# if __name__ == '__main__':
#     main()
