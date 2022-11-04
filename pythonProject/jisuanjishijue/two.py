import random

import cv2
import numpy as np


# 随机噪声


def random_noise(img):
    for i in range(img.shape[1]):
        for j in range(img.shape[0]):
            rand = random.random()
            if rand < 0.05:
                img[j][i] = 0
            if rand > 0.95:
                img[j][i] = 255
    cv2.imwrite('random_noise.jpg', img)
    return img


# 椒盐噪声
def addsalt_pepper(img):
    a = []
    b = []
    for i in range(int(0.1 * img.shape[0] * img.shape[1])):
        rand = random.randint(0, img.shape[0])
        rand1 = random.randint(0, img.shape[1])
        a.append(rand)
        b.append(rand1)
    for i in range(len(a)):
        if random.randint(0, 1) == 0:
            img[a[i] - 1][b[i] - 1] = 0
        else:
            img[a[i] - 1][b[i] - 1] = 255
    # img = cv2.medianBlur(img, 5)
    cv2.imwrite('salt_pepper.jpg', img)
    return img


# 中值滤波

def medianFilter(img, k=5, padding=None):
    imarray = img
    height = imarray.shape[0]
    width = imarray.shape[1]
    if not padding:
        edge = int((k - 1) / 2)
        if height - 1 - edge <= edge or width - 1 - edge <= edge:
            return None
        new_arr = np.zeros((height, width), dtype="uint8")
        for i in range(edge, height - edge):
            for j in range(edge, width - edge):
                new_arr[i, j] = np.median(imarray[i - edge:i + edge + 1, j - edge:j + edge + 1])
    cv2.imwrite('median_filter.jpg', new_arr)
    new_arr = cv2.cvtColor(new_arr, cv2.COLOR_GRAY2BGR)
    return new_arr


# 中值滤波
def median_filter(image, win=3):
    H, W, C = image.shape
    result = image.copy()
    for h in range(1, H - 2):
        for w in range(1, W - 2):
            for c in range(C):
                result[h, w, c] = np.median(result[h:h + win, w:w + win, c])
    cv2.imwrite('median_filter.jpg', result)
    return result


# 均值滤波
def mean_filter(image):
    K = ([1, 1, 1],
         [1, 1, 1],
         [1, 1, 1])
    K = np.array(K)
    H, W, C = image.shape
    result = image.copy()
    for h in range(1, H - 2):
        for w in range(1, W - 2):
            for c in range(C):
                result[h, w, c] = sum(sum(K * result[h:h + K.shape[0], w:w + K.shape[1], c])) // 9
    cv2.imwrite('mean_filter.jpg', result)
    return result


# 八邻域平均
def eight_neighborhood_average(img):
    r1, r2, r2, r4, r5, r6, r7, r8, r = 0, 0, 0, 0, 0, 0, 0, 0, 0
    g1, g2, g2, g4, g5, g6, g7, g8, g = 0, 0, 0, 0, 0, 0, 0, 0, 0
    b1, b2, b2, b4, b5, b6, b7, b8, b = 0, 0, 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(1, img.shape[1] - 1):
        for j in range(1, img.shape[0] - 1):
            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j - 1][i][2])
            r3 = int(img[j - 1][i + 1][2])
            r4 = int(img[j][i - 1][2])
            r5 = int(img[j][i + 1][2])
            r6 = int(img[j + 1][i - 1][2])
            r7 = int(img[j + 1][i][2])
            r8 = int(img[j + 1][i + 1][2])
            r = int((r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8) / 8)
            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j - 1][i][1])
            g3 = int(img[j - 1][i + 1][1])
            g4 = int(img[j][i - 1][1])
            g5 = int(img[j][i + 1][1])
            g6 = int(img[j + 1][i - 1][1])
            g7 = int(img[j + 1][i][1])
            g8 = int(img[j + 1][i + 1][1])
            g = int((g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8) / 8)
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j - 1][i][0])
            b3 = int(img[j - 1][i + 1][0])
            b4 = int(img[j][i - 1][0])
            b5 = int(img[j][i + 1][0])
            b6 = int(img[j + 1][i - 1][0])
            b7 = int(img[j + 1][i][0])
            b8 = int(img[j + 1][i + 1][0])
            b = int((b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8) / 8)
            img2[j][i] = [b, g, r]
    cv2.imwrite('eight_neighborhood_average.jpg', img2)
    return img2


def expectation(a):
    a.remove(max(a)), a.remove(min(a))
    mean_a = np.mean(a)
    return mean_a


# 修正平均滤波
def xiuzheng(img):
    img2 = img.copy()
    for i in range(1, img.shape[1] - 1):
        for j in range(1, img.shape[0] - 1):
            rr, m = 0, 0
            dt = []
            for k in range(-1, 2):
                for n in range(-1, 2):
                    dt.append(img[j + n][i + k][2])
            rr = expectation(dt)
            img2[j][i] = [rr, rr, rr]
    cv2.imwrite('xiuzheng.jpg', img2)
    return img2


# img = cv2.imread("f:\\qq.png")
# img3 = img.copy()
# img2 = addsalt_pepper(img)
# img1 = median_filter(img2)
# cv2.imshow("img", img2)
# cv2.imshow("img2", img1)
# cv2.waitKey(0)
