# 锐化
import cv2


# 水平垂直差分法
def diff(img):
    b1, b2, b3, b4 = 0, 0, 0, 0
    g1, g2, g3, g4 = 0, 0, 0, 0
    r1, r2, r3, r4 = 0, 0, 0, 0
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            b1 = int(img[j][i][0])
            b2 = int(img[j][i + 1][0])
            b3 = int(img[j + 1][i][0])
            b4 = abs(b1 - b2) + abs(b1 - b3)
            g1 = int(img[j][i][1])
            g2 = int(img[j][i + 1][1])
            g3 = int(img[j + 1][i][1])
            g4 = abs(g1 - g2) + abs(g1 - g3)
            r1 = int(img[j][i][2])
            r2 = int(img[j][i + 1][2])
            r3 = int(img[j + 1][i][2])
            r4 = abs(r1 - r2) + abs(r1 - r3)
            if b4 > 255:
                b4 = 255
            if g4 > 255:
                g4 = 255
            if r4 > 255:
                r4 = 255
            img[j][i][0] = b4
            img[j][i][1] = g4
            img[j][i][2] = r4
    cv2.imwrite("diff.jpg", img)
    return img


# sobel算子:
def sobel(img):
    b0, b1, b2, b3, b4 = 0, 0, 0, 0, 0
    b0, g1, g2, g3, g4 = 0, 0, 0, 0, 0
    r0, r1, r2, r3, r4 = 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            b1 = int(img[j][i][0])
            b2 = int(img[j][i + 1][0])
            b3 = int(img[j + 1][i][0])
            b0 = int(img[j + 1][i + 1][0])
            b4 = abs(b1 - b0) + abs(b2 - b3)
            g1 = int(img[j][i][1])
            g2 = int(img[j][i + 1][1])
            g3 = int(img[j + 1][i][1])
            g0 = int(img[j + 1][i + 1][1])
            g4 = abs(g1 - g0) + abs(g2 - g3)
            r1 = int(img[j][i][2])
            r2 = int(img[j][i + 1][2])
            r3 = int(img[j + 1][i][2])
            r0 = int(img[j + 1][i + 1][2])
            r4 = abs(r1 - r0) + abs(r2 - r3)
            if b4 > 255:
                b4 = 255
            if g4 > 255:
                g4 = 255
            if r4 > 255:
                r4 = 255
            img2[j][i][0] = b4
            img2[j][i][1] = g4
            img2[j][i][2] = r4
    cv2.imwrite("sobel.jpg", img2)
    return img2


# robert算子:
def roberts(img):
    b0, b1, b2, b3, b4, b5, b6, b7, b8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    b0, g1, g2, g3, g4, g5, g6, g7, g8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    r0, r1, r2, r3, r4, r5, r6, r7, r8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(1, img.shape[1] - 1):
        for j in range(1, img.shape[0] - 1):
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j - 1][i][0])
            b3 = int(img[j - 1][i + 1][0])
            b4 = int(img[j - 1][i][0])
            b5 = int(img[j + 1][i][0])
            b6 = int(img[j - 1][i + 1][0])
            b7 = int(img[j][i + 1][0])
            b8 = int(img[j + 1][i + 1][0])
            syb = (b6 + 2 * b7 + b8) - (b1 + 2 * b2 + b3)
            sxb = (b3 + 2 * b5 + b8) - (b1 + 2 * b4 + b6)
            b0 = abs(sxb) + abs(syb)
            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j - 1][i][1])
            g3 = int(img[j - 1][i + 1][1])
            g4 = int(img[j - 1][i][1])
            g5 = int(img[j + 1][i][1])
            g6 = int(img[j - 1][i + 1][1])
            g7 = int(img[j][i + 1][1])
            g8 = int(img[j + 1][i + 1][1])
            syg = (g6 + 2 * g7 + g8) - (g1 + 2 * g2 + g3)
            sxg = (g3 + 2 * g5 + g8) - (g1 + 2 * g4 + g6)
            g0 = abs(sxg) + abs(syg)
            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j - 1][i][2])
            r3 = int(img[j - 1][i + 1][2])
            r4 = int(img[j - 1][i][2])
            r5 = int(img[j + 1][i][2])
            r6 = int(img[j - 1][i + 1][2])
            r7 = int(img[j][i + 1][2])
            r8 = int(img[j + 1][i + 1][2])
            syr = (r6 + 2 * r7 + r8) - (r1 + 2 * r2 + r3)
            sxr = (r3 + 2 * r5 + r8) - (r1 + 2 * r4 + r6)
            r0 = abs(sxr) + abs(syr)
            if b0 >= 255:
                b0 = 255
            if g0 >= 255:
                g0 = 255
            if r0 >= 255:
                r0 = 255
            img2[j][i][0] = b0
            img2[j][i][1] = g0
            img2[j][i][2] = r0
    cv2.imwrite("roberts.jpg", img2)
    return img2


# prewitt算子:

def prewitt(img):
    b0, b1, b2, b3, b4, b5, b6, b7, b8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    b0, g1, g2, g3, g4, g5, g6, g7, g8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    r0, r1, r2, r3, r4, r5, r6, r7, r8 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j - 1][i][0])
            b3 = int(img[j - 1][i + 1][0])
            b4 = int(img[j - 1][i][0])
            b5 = int(img[j + 1][i][0])
            b6 = int(img[j - 1][i + 1][0])
            b7 = int(img[j][i + 1][0])
            b8 = int(img[j + 1][i + 1][0])
            syb = (b6 + b7 + b8) - (b1 + b2 + b3)
            sxb = (b3 + b5 + b8) - (b1 + b4 + b6)
            b0 = abs(sxb) + abs(syb)

            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j - 1][i][1])
            g3 = int(img[j - 1][i + 1][1])
            g4 = int(img[j - 1][i][1])
            g5 = int(img[j + 1][i][1])
            g6 = int(img[j - 1][i + 1][1])
            g7 = int(img[j][i + 1][1])
            g8 = int(img[j + 1][i + 1][1])
            syg = (g6 + g7 + g8) - (g1 + g2 + g3)
            sxg = (g3 + g5 + g8) - (g1 + g4 + g6)
            g0 = abs(sxg) + abs(syg)

            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j - 1][i][2])
            r3 = int(img[j - 1][i + 1][2])
            r4 = int(img[j - 1][i][2])
            r5 = int(img[j + 1][i][2])
            r6 = int(img[j - 1][i + 1][2])
            r7 = int(img[j][i + 1][2])
            r8 = int(img[j + 1][i + 1][2])
            syr = (r6 + r7 + r8) - (r1 + r2 + r3)
            sxr = (r3 + r5 + r8) - (r1 + r4 + r6)
            r0 = abs(sxr) + abs(syr)
            if b0 >= 255:
                b0 = 255
            if g0 >= 255:
                g0 = 255
            if r0 >= 255:
                r0 = 255
            img2[j][i][0] = b0
            img2[j][i][1] = g0
            img2[j][i][2] = r0
    cv2.imwrite("prewitt.jpg", img2)
    return img2


# 拉普拉斯算子：
def laplace(img):
    b, b1, b2, b3, b4, b5, b6, b7, b8, b9 = 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    g, g1, g2, g3, g4, g5, g6, g7, g8, g9 = 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    r, r1, r2, r3, r4, r5, r6, r7, r8, r9 = 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j][i - 1][0])
            b3 = int(img[j + 1][i - 1][0])
            b4 = int(img[j - 1][i][0])
            b5 = int(img[j][i][0])
            b6 = int(img[j + 1][i][0])
            b7 = int(img[j - 1][i + 1][0])
            b8 = int(img[j][i + 1][0])
            b9 = int(img[j + 1][i + 1][0])
            b = abs(b1 + b2 + b3 + b4 + b6 + b7 + b8 + b9 - 8 * b5)

            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j][i - 1][1])
            g3 = int(img[j + 1][i - 1][1])
            g4 = int(img[j - 1][i][1])
            g5 = int(img[j][i][1])
            g6 = int(img[j + 1][i][1])
            g7 = int(img[j - 1][i + 1][1])
            g8 = int(img[j][i + 1][1])
            g9 = int(img[j + 1][i + 1][1])
            g = abs(g1 + g2 + g3 + g4 + g6 + g7 + g8 + g9 - 8 * g5)

            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j][i - 1][2])
            r3 = int(img[j + 1][i - 1][2])
            r4 = int(img[j - 1][i][2])
            r5 = int(img[j][i][2])
            r6 = int(img[j + 1][i][2])
            r7 = int(img[j - 1][i + 1][2])
            r8 = int(img[j][i + 1][2])
            r9 = int(img[j + 1][i + 1][2])
            r = abs(r1 + r2 + r3 + r4 + r6 + r7 + r8 + r9 - 8 * r5)
            if b > 255:
                b = 255
            if g > 255:
                g = 255
            if r > 255:
                r = 255
            img2[j][i][0] = b
            img2[j][i][1] = g
            img2[j][i][2] = r
    cv2.imwrite("laplace.jpg", img2)
    return img2


# robinson算子：
def robinson(img):
    b, b1, b2, b3, b4, b5, b6 = 0, 0, 0, 0, 0, 0, 0
    g, g1, g2, g3, g4, g5, g6 = 0, 0, 0, 0, 0, 0, 0
    r, r1, r2, r3, r4, r5, r6 = 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(1, img.shape[1] - 1):
        for j in range(1, img.shape[0] - 1):
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j][i - 1][0])
            b3 = int(img[j + 1][i - 1][0])
            b4 = int(img[j - 1][i + 1][0])
            b5 = int(img[j][i + 1][0])
            b6 = int(img[j + 1][i + 1][0])
            b = abs(b1 + b2 * 2 + b3 - b4 - 2 * b5 - b6)

            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j][i - 1][1])
            g3 = int(img[j + 1][i - 1][1])
            g4 = int(img[j - 1][i + 1][1])
            g5 = int(img[j][i + 1][1])
            g6 = int(img[j + 1][i + 1][1])
            g = abs(g1 + g2 * 2 + g3 - g4 - 2 * g5 - g6)

            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j][i - 1][2])
            r3 = int(img[j + 1][i - 1][2])
            r4 = int(img[j - 1][i + 1][2])
            r5 = int(img[j][i + 1][2])
            r6 = int(img[j + 1][i + 1][2])
            r = abs(r1 + r2 * 2 + r3 - r4 - 2 * r5 - r6)

            if b >= 255:
                b = 255
            if g >= 255:
                g = 255
            if r >= 255:
                r = 255
            img2[j][i][0] = b
            img2[j][i][1] = g
            img2[j][i][2] = r
    cv2.imwrite("robinson.jpg", img2)
    return img2


# kirsh算子：
def kirsh(img):
    b, b1, b2, b3, b4, b6, b7, b8, b9 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    g, g1, g2, g3, g4, g6, g7, g8, g9 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    r, r1, r2, r3, r4, r6, r7, r8, r9 = 0, 0, 0, 0, 0, 0, 0, 0, 0
    img2 = img.copy()
    for i in range(img.shape[1] - 1):
        for j in range(img.shape[0] - 1):
            b1 = int(img[j - 1][i - 1][0])
            b2 = int(img[j][i - 1][0])
            b3 = int(img[j + 1][i - 1][0])
            b4 = int(img[j - 1][i][0])

            b6 = int(img[j + 1][i][0])
            b7 = int(img[j - 1][i + 1][0])
            b8 = int(img[j][i + 1][0])
            b9 = int(img[j + 1][i + 1][0])
            b = abs(b1 * 5 + b2 * 5 + b3 * 5 - 3 * b4 - 3 * b6 - 3 * b7 - 3 * b8 - 3 * b9)

            g1 = int(img[j - 1][i - 1][1])
            g2 = int(img[j][i - 1][1])
            g3 = int(img[j + 1][i - 1][1])
            g4 = int(img[j - 1][i][1])

            g6 = int(img[j + 1][i][1])
            g7 = int(img[j - 1][i + 1][1])
            g8 = int(img[j][i + 1][1])
            g9 = int(img[j + 1][i + 1][1])
            g = abs(g1 * 5 + g2 * 5 + g3 * 5 - 3 * g4 - 3 * g6 - 3 * g7 - 3 * g8 - 3 * g9)

            r1 = int(img[j - 1][i - 1][2])
            r2 = int(img[j][i - 1][2])
            r3 = int(img[j + 1][i - 1][2])
            r4 = int(img[j - 1][i][2])

            r6 = int(img[j + 1][i][2])
            r7 = int(img[j - 1][i + 1][2])
            r8 = int(img[j][i + 1][2])
            r9 = int(img[j + 1][i + 1][2])
            r = abs(r1 * 5 + r2 * 5 + r3 * 5 - 3 * r4 - 3 * r6 - 3 * r7 - 3 * r8 - 3 * r9)
            if b > 255:
                b = 255
            if g > 255:
                g = 255
            if r > 255:
                r = 255
            img2[j][i][0] = b
            img2[j][i][1] = g
            img2[j][i][2] = r
    cv2.imwrite("kirsh.jpg", img2)
    return img2

# 图像锐化

#
# img = cv2.imread("F:\\qq.png")
# img2 = img.copy()
#
# cv2.imshow("img", robinson(img))
# cv2.imshow("img2", img2)
# cv2.waitKey(0)
