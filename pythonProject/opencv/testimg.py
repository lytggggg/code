import math

import numpy
from PIL import ImageGrab
from pynput.mouse import Button, Controller
import time
import cv2
import numpy as np
from numpy import *

change1=5
change2 = 0
t = 75
m = 5


def math_point(p, center_loc, k):
    # y=-0.58*x+a*0.58+b
    y1 = k * center_loc[0] + p[0] * (-k) + p[1]
    y1 = int(y1)
    x2 = (p[0] * (-k) + p[1] - center_loc[1]) / (-k)
    x2 = int(x2)

    p1 = (center_loc[0], y1)
    p2 = (x2, center_loc[1])
    return p1, p2


def get_img1(img, k):
    pt_1 = ()
    pt_2 = ()
    pt_3 = ()
    pt_4 = ()
    pt_5 = ()
    if k < 0:
        pt_1 = (img.shape[1], img.shape[0])
        pt_2 = (img.shape[1], img.shape[0] - 30)
        pt_3 = (img.shape[1] - 50, img.shape[0])
    else:
        pt_1 = (0, img.shape[0] - 30)
        pt_2 = (0, img.shape[0])
        pt_3 = (50, img.shape[0])

    blank = np.ones(img.shape[:2], dtype='uint8')
    cv2.circle(blank, pt_1, 1, (0, 0, 0), -1)
    cv2.circle(blank, pt_2, 1, (0, 0, 0), -1)
    cv2.circle(blank, pt_3, 1, (0, 0, 0), -1)

    triangle_cnt = np.array([pt_1, pt_2, pt_3])

    mask = cv2.drawContours(blank, [triangle_cnt], 0, (0, 0, 0), -1)
    m = cv2.bitwise_and(img, img, mask=mask)
    cv2.imshow("m", m)
    return m


def find_area(p1, p2):
    return abs(p1[0] - p2[0]) * abs(p1[1] - p2[1])


def get_center(img_rgb, template):
    res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    h, w = template.shape[:2]
    top_left = max_loc
    center_loc = ((int)(max_loc[0] + w / 2), int(max_loc[1] + h / 2) + 36)
    a = cv2.circle(img_rgb, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    return max_loc, h, w, center_loc


def get_tol(img):
    img_copy = img.copy()
    arr = []
    A = int(img.shape[0])
    B = int(img.shape[1])
    for y in range(A):
        for x in range(B):
            if x != 0:
                temp1 = int(img[y][x][0]) - int(img[y][x - 1][0])
                temp2 = int(img[y][x][1]) - int(img[y][x - 1][1])
                temp3 = int(img[y][x][2]) - int(img[y][x - 1][2])
                if abs(temp1) > 5 or abs(temp2) > 5 or abs(temp3) > 5:
                    a = (x, y)
                    arr.append(a)

                    # cv2.circle(img, (x, y), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    tep = []
    arr = np.array(arr)
    for i in range(len(arr)):
        if arr[i][1] == arr.min(0)[1]:
            tep.append(arr[i])
    tep = np.array(tep)

    Arr = []
    for y in range(A):
        for x in range(B):
            Arr.append(list(img[y][x]))

    unq, count = np.unique(Arr, axis=0, return_counts=True)
    unq = unq[count >= 100]
    tql = []
    for i in range(20):
        for j in unq:
            if (img[tep[0][1] + i + 1][int(tep.mean(axis=0)[0]) + 1] == j).all():
                print(j)

                tql.append(i)
                break
    print("tql", tql[0])
    co = img[tep[0][1] + tql[0]][int(tep.mean(axis=0)[0]) + 1]

    # for i in arr:
    #     cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 255), thickness=1, lineType=cv2.LINE_AA)

    arr1 = []
    arr2 = []
    a_a = [0, 200, 201]
    a_a = numpy.array(a_a)
    print("co", co)
    fan_co = [255 - co[0], 255 - co[1], 255 - co[2]]

    for y in range(A):
        for x in range(B):
            b = (x, y)
            a_arr = [int(img[y][x][0]), int(img[y][x][1]), int(img[y][x][2])]

            if abs((int(img[y][x][0]) - int(co[0]))) >= m or abs(int(img[y][x][1]) - int(co[1])) >= m or abs(
                        int(img[y][x][2]) - int(co[2])) >= m:
                arr1.append(b)

    for i in arr1:
        img_copy[i[1]][i[0]] = np.array([0, 0, 0])
        # cv2.circle(img_copy, (i[0], i[1]), 1, (0, 0, 0), thickness=1,
        #            lineType=cv2.LINE_AA)
    cheak = 0
    for y in range(A):
        for x in range(B):
            if int(img_copy[y][x][0]) - int(co[0]) == 0 and int(img_copy[y][x][1]) - int(co[1]) == 0 and int(
                    img_copy[y][x][2]) - int(
                co[2]) == 0:
                cheak = 1
                break
    print("cheak", cheak)
    # for i in arr2:
    #     cv2.circle(img_copy, (i[0], i[1]), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
    a = img_copy
    b = img_copy2
    cv2.circle(img_copy2, (int(tep.mean(axis=0)[0]), tep[0][1] + tql[0]), 1, (255, 0, 0), thickness=1,
               lineType=cv2.LINE_AA)
    cv2.imshow("b", b)

    return a


def get_c(img):
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img = cv2.GaussianBlur(img, (3, 3), cv2.BORDER_DEFAULT)
    img = cv2.Canny(img, 50, 50)
    img = cv2.dilate(img, (5, 5), iterations=1)
    img = cv2.erode(img, (3, 3), iterations=1)

    contours1, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(image=img_copy2, contours=contours1, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)

    cv2.imshow("img", img)


def distance(a, b):
    p1 = np.array(a)
    p2 = np.array(b)
    p3 = p1 - p2
    p4 = math.hypot(p3[0], p3[1])
    return p4


def get_time(length):
    time = length / 306.001158116
    return time


def dian_ji(time1):
    mouse = Controller()
    mouse.press(Button.left)
    time.sleep(time1)
    mouse.release(Button.left)


a = 0

img = cv2.imread("F:\\test\\Snipaste_2022_" + str(t) + ".png")
img_rgb = img.copy()
template = cv2.imread('F:\Snipaste_2022_0.png')
max_loc, h, w, center_loc = get_center(img, template)
img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
center = ()
length = 0
if center_loc[0] > img.shape[1] / 2:

    img = img[200:center_loc[1], 0:center_loc[0] - 15]
    img_copy2 = img.copy()
    getimg = get_tol(img)
    get_img = get_img1(getimg, -1)

    get_c(get_img)


else:

    img = img[200:center_loc[1], center_loc[0] + 15:img.shape[1]]
    img_copy2 = img.copy()
    getimg = get_tol(img)
    get_img = get_img1(getimg, 1)

    get_c(get_img)

cv2.waitKey(0)
