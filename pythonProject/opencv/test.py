from pynput.mouse import Button, Controller

import math
import time
import cv2
import cv2 as cv2
import numpy as np


def nothing(x):
    pass


# Snipaste_2022-07-21_22-56-38.png Snipaste_2022-07-21_20-42-49.png c Snipaste_2022-07-22_01-21-28.png Snipaste_2022-07-21_18-02-35.png
def get_img(img):
    contours, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    a = -1
    for obj in contours:
        a = a + 1
        if cv2.contourArea(obj) > 3000:
            print(cv2.contourArea(obj))
            obj = obj.squeeze()
            n = np.array(obj)
            ym = n.min(axis=0)[1]
            xm = n.max(axis=0)[0]

            x1 = obj[list(zip(*np.where(n == ym)))[0][0]][0]
            y1 = ym
            print(list(zip(*np.where(n == xm))))
            y2 = obj[np.array(list(zip(*np.where(n == xm)))).max(axis=0)[0]][1]
            x2 = xm
            cx = x1
            cy = y2

            center = (cx, cy)
            cv2.circle(image_copy, (382, 380), 1, (255, 0, 0), thickness=3, lineType=cv2.LINE_AA)

            cv2.circle(image_copy, (x1, y1), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.circle(image_copy, (x2, y2), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.circle(image_copy, (cx, cy), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.drawContours(image=image_copy, contours=contours, contourIdx=a, color=(255, 0, 0), thickness=1,
                             lineType=cv2.LINE_AA)
            # break
    # return center


def get_center(img_rgb, template):
    res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    h, w = template.shape[:2]
    top_left = max_loc
    center_loc = ((int)(max_loc[0] + w / 2), int(max_loc[1] + h / 2) + 36)
    cv2.circle(img_rgb, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    return max_loc, h, center_loc


def distance(a, b):
    p1 = np.array(a)
    p2 = np.array(b)
    p3 = p1 - p2
    print(p3)
    p4 = math.hypot(p3[0], p3[1])
    return p4


def get_time(distance):
    time = distance / 306.001158116
    return time


lowThreshold = 0
max_lowThreshold = 50
cv2.namedWindow('image')

cv2.createTrackbar('R', 'image', lowThreshold, max_lowThreshold, nothing)
img_rgb = cv2.imread('F:\img\PILImage152.jpg')
img_rgb = cv2.resize(img_rgb, (449, 854), interpolation=cv2.INTER_CUBIC)
image_copy2 = img_rgb.copy()
template = cv2.imread('F:\Snipaste_2022-07-21_03-20-01.png')
imgContour = img_rgb.copy()
max_loc, h, center_loc = get_center(img_rgb, template)
img_rgb = img_rgb[100:int(max_loc[1] + h / 2) + 35, 0:451]

image_copy = img_rgb.copy()

# cv2.circle(image_copy2, (88, 400), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
# img_rgb=cv2.cvtColor(img_rgb,cv2.COLOR_BGR2GRAY)
# img_rgb = cv2.GaussianBlur(img_rgb, (3, 3), cv2.BORDER_DEFAULT)
# canny_img = cv2.Canny(img_rgb, 15, 95)
# # kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (5, 5))
# canny_img = cv2.dilate(canny_img, (1, 1), iterations=3)
# canny_img = cv2.erode(canny_img, (3, 3), iterations=1)

a = cv2.getTrackbarPos('R', 'image')
img_rgb = cv2.cvtColor(img_rgb, cv2.COLOR_BGR2GRAY)

canny_img = cv2.adaptiveThreshold(img_rgb, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY_INV, 15, 9)
canny_img = cv2.dilate(canny_img, (5, 5), iterations=a)
canny_img = cv2.erode(canny_img, (3, 3), iterations=5)
contours, hierarchy = cv2.findContours(image=canny_img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)

print(a)
# cv2.drawContours(image=image_copy, contours=contours, contourIdx=-1, color=(0, 255, 0), thickness=1,
#                              lineType=cv2.LINE_AA)
get_img(canny_img)

cv2.imshow('None approximation', image_copy)
cv2.imshow("img", canny_img)
if cv2.waitKey(0) == 27:
    cv2.destroyAllWindows()