import cv2
import numpy as np


def get_center(img_rgb, template):
    res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    h, w = template.shape[:2]
    top_left = max_loc
    center_loc = ((int)(max_loc[0] + w / 2), int(max_loc[1] + h / 2) + 36)
    cv2.circle(img_rgb, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    return max_loc, h, w, center_loc


def find():
    detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(img_rgb, 30, 30 * ratio, apertureSize=kernel_size)
    dst = cv2.bitwise_and(img_rgb, img_rgb, mask=detected_edges)  # just add some colours to edges from original image.

    lap = img_rgb.copy()
    contours, hierarchy = cv2.findContours(image=detected_edges, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    max = 0
    min = 50000
    a = []
    b = []
    # contours1 = list(contours1)
    # contours=[]
    # for obj in contours1:
    #
    #     if cv2.contourArea(obj) > 100:
    #         contours.append(obj)
    # contours = tuple(contours)
    for obj in contours:
        print(cv2.contourArea(obj))
    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][1] < min:
                    min = contours[i][j][k][1]
                if contours[i][j][k][0] > max:
                    max = contours[i][j][k][0]
    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][1] == min:
                    a = contours[i][j][k]
                if contours[i][j][k][0] == max:
                    b.append(contours[i][j][k])

    print(a)
    print(b)

    Min = 50000
    c = []
    for i in range(len(b)):
        if b[i][1] < Min:
            c = b[i]

    d = [a[0], c[1]]
    print(c)
    print(d)
    cv2.circle(lap, (a[0], a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (c[0], c[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.drawContours(image=lap, contours=contours, contourIdx=0, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    cv2.imshow('canny demo', lap)


def CannyThreshold():
    detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(img_rgb, 65, 65 * ratio, apertureSize=kernel_size)
    dst = cv2.bitwise_and(img_rgb, img_rgb, mask=detected_edges)  # just add some colours to edges from original image.

    lap = img_rgb.copy()
    contours, hierarchy = cv2.findContours(image=detected_edges, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    a = -1
    max = 0
    min = 50000
    for obj in contours:
        a = a + 1
        if cv2.contourArea(obj) > 3100 or 3100 > cv2.contourArea(obj) > 0:
            print(cv2.contourArea(obj))
            obj = obj.squeeze()

            n = np.array(obj)
            ym = n.min(axis=0)[1]
            xm = n.max(axis=0)[0]
            print(ym, xm)

            x1 = obj[list(zip(*np.where(n == ym)))[0][0]][0]
            y1 = ym
            y2 = obj[np.array(list(zip(*np.where(n == xm)))).max(axis=0)[0]][1]
            x2 = xm
            cx = x1
            cy = y2

            center = (cx, cy)
            cv2.circle(lap, (176, 228), 1, (0, 0, 255), thickness=10, lineType=cv2.LINE_AA)

            cv2.circle(lap, (x1, y1), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.circle(lap, (x2, y2), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.circle(lap, (cx, cy), 1, (255, 255, 0), thickness=3, lineType=cv2.LINE_AA)

            cv2.drawContours(image=lap, contours=contours, contourIdx=a, color=(255, 0, 0), thickness=1,
                             lineType=cv2.LINE_AA)
            cv2.imshow('canny demo', lap)


lowThreshold = 0
max_lowThreshold = 255
ratio = 3
kernel_size = 3

img_rgb = cv2.imread('F:\img\Snipaste_2022_0.png')

img_rgb = cv2.resize(img_rgb, (450, 855), interpolation=cv2.INTER_CUBIC)
image_copy = img_rgb.copy()
template = cv2.imread('F:\Snipaste_2022-07-21_03-20-01.png')
max_loc, h, w, center_loc = get_center(img_rgb, template)
print(center_loc)
if center_loc[0] > img_rgb.shape[1] / 2:
    img_rgb = img_rgb[200:int(max_loc[1] + h / 2) + 39, 0:max_loc[0] ]
else:
    img_rgb = img_rgb[200:int(max_loc[1] + h / 2) + 39, max_loc[0] + w:img_rgb.shape[1]]

gray = cv2.cvtColor(img_rgb, cv2.COLOR_BGR2GRAY)
img_rgb = cv2.GaussianBlur(img_rgb, (3, 3), 0)

find()  # initialization
if cv2.waitKey(0) == 27:
    cv2.destroyAllWindows()
