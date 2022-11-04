import cv2
import numpy as np


# 二值化图像
def binary_img(img):
    # 二值化图像
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    ret, img = cv2.threshold(img, 127, 255, cv2.THRESH_BINARY)
    cv2.imwrite('binary_img.jpg', img)
    return img


# 膨胀函数
def dilate(img):
    # 膨胀函数
    kernel = np.ones((3, 3), np.uint8)
    img = cv2.dilate(img, kernel, iterations=1)
    cv2.imwrite('dilate.jpg', img)
    return img


# 腐蚀函数
def erode(img):
    # 腐蚀函数
    kernel = np.ones((3, 3), np.uint8)
    img = cv2.erode(img, kernel, iterations=1)
    cv2.imwrite('erode.jpg', img)
    return img


def BinaryDilation(img):
    img2 = img.copy()
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):

            if img[j][i] == 255:
                img2[j][i] = 255
                img2[j - 1][i - 1] = 255
                img2[j - 1][i] = 255
                img2[j - 1][i + 1] = 255
                img2[j][i - 1] = 255
                img2[j][i + 1] = 255
                img2[j + 1][i - 1] = 255
                img2[j + 1][i] = 255
                img2[j + 1][i + 1] = 255
    cv2.imwrite('BinaryDilation.jpg', img2)
    return img2


def BinaryErosion(img):
    img2 = img.copy()
    r1, r2, r2 = 0, 0, 0
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            r1 = img[j][i]
            if r1 == 255:
                r2 = img[j + 1][i]
                r3 = img[j][i + 1]
                if r2 == 255 and r3 == 255:
                    img2[j][i] = 255
                else:
                    img2[j][i] = 0
    cv2.imwrite('BinaryErosion.jpg', img2)
    return img2


def kaiyunsuan(img):
    img = BinaryErosion(img)
    img = BinaryDilation(img)
    cv2.imwrite('kaiyunsuan.jpg', img)
    return img


def biyunsuan(img):
    img = BinaryDilation(img)
    img = BinaryErosion(img)
    cv2.imwrite('biyunsuan.jpg', img)
    return img


# 灰度图像膨胀
def gray_dilate(img):
    img2 = img.copy()

    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            gray = []
            gray.append(int(img[j][i]))
            gray.append(int(img[j][i - 1]))
            gray.append(int(img[j][i + 1]))
            gray.append(int(img[j - 1][i]))
            gray.append(int(img[j + 1][i]))
            m = max(gray) + gray[0]
            if m > 255:
                m = 255

            img2[j][i] = m
    cv2.imwrite('gray_dilate.jpg', img2)
    return img2


# 灰度图像腐蚀
def gray_erode(img):
    img2 = img.copy()

    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            gray = []
            gray.append(int(img[j][i]))
            gray.append(int(img[j][i - 1]))
            gray.append(int(img[j][i + 1]))
            gray.append(int(img[j - 1][i]))
            gray.append(int(img[j + 1][i]))
            m = abs(min(gray) - gray[0])

            img2[j][i] = m
    cv2.imwrite('gray_erode.jpg', img2)
    return img2


def gray_kaiyunsuan(img):
    img = gray_erode(img)
    img = gray_dilate(img)
    cv2.imwrite('gray_kaiyunsuan.jpg', img)
    return img


def gray_biyunsuan(img):
    img = gray_dilate(img)
    img = gray_erode(img)
    cv2.imwrite('gray_biyunsuan.jpg', img)

    return img


img = cv2.imread('f:\\qq.png')

img2 = img.copy()
img2 = cv2.cvtColor(img2, cv2.COLOR_BGR2GRAY)

img = binary_img(img)
cv2.imshow('img', img)
cv2.imshow('imsg', gray_erode(img2))
cv2.imshow('imssg', gray_biyunsuan(img2))
cv2.waitKey(0)
