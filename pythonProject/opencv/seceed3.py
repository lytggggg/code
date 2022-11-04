import math
from PIL import ImageGrab
from pynput.mouse import Button, Controller
import time
import cv2
import numpy as np
from numpy import *


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
                if abs(temp1) > 10 or abs(temp2) > 10 or abs(temp3) > 10:
                    a = (x, y)
                    arr.append(a)

                    # cv2.circle(img, (x, y), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    co = img[arr[0][1] + 20][arr[0][0]]
    # for i in arr:
    #     cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    print(co)
    arr1 = []
    for y in range(A):
        for x in range(B):
            #之前是10，20
            if abs(int(img[y][x][0]) - int(co[0])) > 15 or abs(int(img[y][x][1]) - int(co[1])) > 15 or abs(
                    int(img[y][x][2]) - int(co[2])) > 15:
                b = (x, y)
                arr1.append(b)
    for i in arr1:
        cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 0), thickness=1, lineType=cv2.LINE_AA)
    a = img_copy
    cv2.imshow("a", a)
    return a


def get_c(img):
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img = cv2.GaussianBlur(img, (3, 3), cv2.BORDER_DEFAULT)
    img = cv2.Canny(img, 50, 50)
    img = cv2.dilate(img, (5, 5), iterations=1)
    canny_img = cv2.erode(img, (3, 3), iterations=1)

    contours1, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(image=img_copy2, contours=contours1, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)

    area = []
    contours = []
    print("length", len(contours1))
    for obj in contours1:
        print(cv2.contourArea(obj))
        area.append(cv2.contourArea(obj))
    zui_da = max(area)
    zui_xiao = min(area)
    print("max=", zui_da, "min=", zui_xiao)
    if zui_da - zui_xiao <= 100:
        for obj in contours1:
            contours.append(obj)
    else:
        for obj in contours1:
            if cv2.contourArea(obj) == zui_da:
                contours.append(obj)
    print("len", len(contours))
    Max = 0
    Min = 50000
    a = []
    b = []

    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][0] < Min:
                    Min = contours[i][j][k][0]
    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][0] > Max:
                    Max = contours[i][j][k][0]

    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][0] == Min:
                    a = contours[i][j][k]
                if contours[i][j][k][0] == Max:
                    b.append(contours[i][j][k])
    M_in = 50000
    c = []
    for i in range(len(b)):
        if b[i][1] < M_in:
            c = b[i]
    print(a)
    print(c)
    d1 = int((a[0] + c[0]) / 2)
    d2 = int((a[1] + c[1]) / 2)
    d = [d1, d2]
    print(d)
    cv2.circle(img_copy2, (a[0], a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(img_copy2, (c[0], c[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    cv2.imshow("csa", img_copy2)
    cv2.imshow("img", img)
    return d


def distance(a, b):
    p1 = np.array(a)
    p2 = np.array(b)
    p3 = p1 - p2
    print(p3)
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
while 1:
    ss_region = (1, 2, 450, 855)  # 距离左上右下的像素
    ss_img = ImageGrab.grab(ss_region)
    p = "F:\\img\\"
    a = a + 1
    path = p + "PILImage" + str(a) + ".jpg"
    ss_img.save(path)
    img = cv2.imread(path)
    img_rgb = img.copy()
    template = cv2.imread('F:\Snipaste_2022-07-21_03-20-01.png')
    max_loc, h, w, center_loc = get_center(img, template)
    img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
    center = ()
    length = 0
    if center_loc[0] > img.shape[1] / 2:
        img = img[200:center_loc[1], 0:center_loc[0] - 15]
        img_copy2 = img.copy()
        getimg = get_tol(img)

        center1 = get_c(getimg)
        center2 = [img.shape[1] + 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        dian_ji(time1)
    else:
        img = img[200:center_loc[1], center_loc[0] + 15:img.shape[1]]
        img_copy2 = img.copy()
        getimg = get_tol(img)
        center1 = get_c(getimg)
        center2 = [0 - 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        dian_ji(time1)

    cv2.waitKey(500)
    time.sleep(0.6)
