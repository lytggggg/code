import cv2

# 将图像变成伪色彩增强
import numpy as np


# robert算子图像锐化


def wei_color1(img):
    for i in range(img.shape[1]):
        for j in range(img.shape[0]):
            b, g, r = img[j][i]
            if b > 200 and g > 200 and r > 200:
                img[j][i] = [255, 255, 255]
            elif b > 200 > r and g > 200:
                img[j][i] = [255, 255, 0]
            elif b > 200 and g < 200 < r:
                img[j][i] = [255, 0, 255]
            elif b > 200 > r and g < 200:
                img[j][i] = [255, 0, 0]
            elif b < 200 < g and r > 200:
                img[j][i] = [0, 255, 255]
            elif b < 200 < g and r < 200:
                img[j][i] = [0, 255, 0]
            elif b < 200 < r and g < 200:
                img[j][i] = [0, 0, 255]
            elif b < 200 and g < 200 and r < 200:
                img[j][i] = [0, 0, 0]
    cv2.imwrite('wei_color1.jpg', img)
    return img


def wei_color2(img):
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

    w, h = img.shape
    img_color = np.zeros((w, h, 3))

    for row in range(w):
        for col in range(h):
            I_gray = img[row][col]
            if 0 <= I_gray < 64:
                img_color[row][col][0] = 0
                img_color[row][col][1] = I_gray * 4
                img_color[row][col][2] = 255
            elif 64 <= I_gray < 128:
                img_color[row][col][0] = 0
                img_color[row][col][1] = 255
                img_color[row][col][2] = (128 - I_gray) * 4 - 1
            elif 128 <= I_gray < 192:
                img_color[row][col][0] = (I_gray - 128) * 4
                img_color[row][col][1] = 255
                img_color[row][col][2] = 0
            else:  # (192-255)
                img_color[row][col][0] = 255
                img_color[row][col][1] = (192 - I_gray) * 4 - 1
                img_color[row][col][2] = 0
    cv2.imwrite('wei_color2.jpg', img_color)
    return img_color


def wei_color3(img):
    b, g, r = 0, 0, 0
    for i in range(img.shape[1]):
        for j in range(img.shape[0]):
            r = img[j][i][2]
            blue, green, red = 0, 0, 0
            if r // 64 == 0:
                red = 0
                green = 4 * r
                blue = 255
            elif r // 64 == 1:
                red = 0
                green = 255
                blue = 511 - 4 * r
            elif r // 64 == 2:
                red = 4 * r - 511
                green = 255
                blue = 0
            elif r // 64 == 3:
                red = 255
                green = 1023 - 4 * r
                blue = 0
            img[j][i] = [blue, green, red]
    cv2.imwrite('wei_color3.jpg', img)

    return img

#
# img = cv2.imread("F:\\qq.png")
# print(128//64)
# img2 = img.copy()
# img = wei_color3(img)
# cv2.imshow("img", img2)
# cv2.imshow("img2", wei_color2(img2))
# cv2.imshow("img3", wei_color1(img2))
# cv2.imshow("img4", img)
# cv2.waitKey(0)
