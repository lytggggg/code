# import cv2
# import numpy as np
# from cv2 import namedWindow
#
#
# # 灰度图
# def img_gray(img):
#     for i in range(img.shape[1]):
#         for j in range(img.shape[0]):
#             b = img[j][i][0] * 0.114
#             g = img[j][i][1] * 0.587
#             r = img[j][i][2] * 0.299
#             gray = b + g + r
#             img[j][i] = gray
#     namedWindow("img", 0)
#     cv2.imshow("img", img)
#
#
# # 固定阈值二值化(127)
# def binary_img(img):
#     img_gray(img)
#     avg = np.mean(img)
#     print(avg)
#     for i in range(img.shape[1]):
#         for j in range(img.shape[0]):
#             if img[j][i][0] <= avg:
#                 img[j][i] = 0
#             else:
#                 img[j][i] = 255
#     namedWindow("img2", 0)
#     cv2.imshow("img2", img)
#
#
# def nothing():
#     pass
#
#
# # 亮度调整
# def light_img():
#     image = cv2.imread("F:\\4.png")
#     cv2.namedWindow("light", 0)
#     cv2.createTrackbar("light", "light", 0, 255, nothing)
#     pos = cv2.getTrackbarPos("light", "light")
#     cv2.imshow("light", image)
#     blank = np.zeros_like(image)
#     while True:
#         pos = cv2.getTrackbarPos("light", "light")
#         blank[:, :] = (pos, pos, pos)
#         result = cv2.add(image, blank)
#         cv2.imshow("light", result)
#
#         c = cv2.waitKey(1)
#
#
# # 通道提取
# def td_tq(img):
#     img1 = img.copy()
#     img2 = img.copy()
#     img3 = img.copy()
#
#     for i in range(img.shape[1]):
#         for j in range(img.shape[0]):
#             b = img[j][i][0]
#             g = img[j][i][1]
#             r = img[j][i][2]
#             img1[j][i] = b
#             img2[j][i] = g
#             img3[j][i] = r
#
#     namedWindow("blue", 0)
#     cv2.imshow("blue", img1)
#     namedWindow("green", 0)
#     cv2.imshow("green", img2)
#     namedWindow("red", 0)
#     cv2.imshow("red", img3)
#
#
# # 对比度调节
# def contrast(img, co):
#     for i in range(img.shape[1]):
#         for j in range(img.shape[0]):
#             b,g,r = img[j][i]
#             rg = abs(127 - r) * co / 255
#             gg = abs(127 - g) * co / 255
#             bg = abs(127 - b) * co / 255
#             if r > 127:
#                 r = r + rg
#             else:
#                 r = r - rg
#             if g > 127:
#                 g = g + gg
#             else:
#                 g = g - gg
#             if b > 127:
#                 b = b + bg
#             else:
#                 b = b - bg
#             if r > 255:
#                 r = 255
#             if r < 0:
#                 r = 0
#             if g > 255:
#                 g = 255
#             if g < 0:
#                 g = 0
#             if b > 255:
#                 b = 255
#             if b < 0:
#                 b = 0
#             img[j][i][0]=b
#             img[j][i][1]=g
#             img[j][i][2]=r
#     return img
#
#
# def contrast_img():
#     image = cv2.imread("F:\\4.png")
#     cv2.namedWindow("contrast", 0)
#     cv2.createTrackbar("contrast", "contrast", 0, 500, nothing)
#     pos = cv2.getTrackbarPos("contrast", "contrast")
#     cv2.imshow("contrast", image)
#     blank = np.zeros_like(image)
#     while True:
#         pos = cv2.getTrackbarPos("contrast", "contrast")
#         blank = contrast(image, pos)
#         result = cv2.add(image, blank)
#         cv2.imshow("contrast", result)
#
#         c = cv2.waitKey(1)
#
# # 图像旋转
#
# img = cv2.imread("F:\\qq.png")
#
# td_tq(img)
# cv2.waitKey(0)
# import cv2
# import imutils
# import numpy as np
#
# #
# # def s_and_b(arg):
# #     lsImg = np.zeros(image.shape, np.float32)
# #     hlsCopy = np.copy(hlsImg)
# #     l = cv2.getTrackbarPos('l', 'l and s')
# #     s = cv2.getTrackbarPos('s', 'l and s')
# #     # 1.调整亮度饱和度(线性变换)、 2.将hlsCopy[:,:,1]和hlsCopy[:,:,2]中大于1的全部截取
# #     hlsCopy[:, :, 1] = (1.0 + l / float(MAX_VALUE)) * hlsCopy[:, :, 1]
# #     hlsCopy[:, :, 1][hlsCopy[:, :, 1] > 1] = 1
# #     # HLS空间通道2是饱和度，对饱和度进行线性变换，且最大值在255以内，这一归一化了，所以应在1以内
# #     hlsCopy[:, :, 2] = (1.0 + s / float(MAX_VALUE)) * hlsCopy[:, :, 2]
# #     hlsCopy[:, :, 2][hlsCopy[:, :, 2] > 1] = 1
# #     # HLS2BGR
# #     lsImg = cv2.cvtColor(hlsCopy, cv2.COLOR_HLS2BGR)
# #     # 显示调整后的效果
# #     cv2.imshow("l and s", imutils.resize(lsImg, 650))
# #
# #
# # image = cv2.imread("F:\\4.png")# 图像归一化，且转换为浮点型, 颜色空间转换 BGR转为HLS
# # fImg = image.astype(np.float32)
# # fImg = fImg / 255.0
# # # HLS空间，三个通道分别是: Hue色相、lightness亮度、saturation饱和度
# # # 通道0是色相、通道1是亮度、通道2是饱和度
# # hlsImg = cv2.cvtColor(fImg, cv2.COLOR_BGR2HLS)
# #
# # l, s, MAX_VALUE = 100, 100, 100
# # cv2.namedWindow("l and s", cv2.WINDOW_AUTOSIZE)
# # cv2.createTrackbar("l", "l and s", l, MAX_VALUE, s_and_b)
# # cv2.createTrackbar("s", "l and s", s, MAX_VALUE, s_and_b)
# #
# # s_and_b(0)
# # if cv2.waitKey(0) == 27:
# #     cv2.destroyAllWindows()

# 图像锐化sobel算子
import cv2
import numpy as np
# 图像锐化sobel算子
img = cv2.imread("F:\\qq.png")
img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
sobelx = cv2.Sobel(img, cv2.CV_64F, 1, 0, ksize=5)
sobely = cv2.Sobel(img, cv2.CV_64F, 0, 1, ksize=5)
sobelx = cv2.convertScaleAbs(sobelx)
sobely = cv2.convertScaleAbs(sobely)
sobelxy = cv2.addWeighted(sobelx, 0.5, sobely, 0.5, 0)
cv2.imshow("sobelxy", sobelxy)
cv2.waitKey(0)
cv2.destroyAllWindows()


