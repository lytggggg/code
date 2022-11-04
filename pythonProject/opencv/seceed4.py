import math
import shutil
import os
import win32con
import win32gui
from PIL import ImageGrab
from pynput.mouse import Button, Controller
import time
import cv2
import pyscreenshot
import numpy as np
import pyautogui
from numpy import *

change1=3
change2 = 0
m = 3


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
    hwnd = win32gui.FindWindow(None, "m")  # 获取句柄，然后置顶
    CVRECT = cv2.getWindowImageRect("m")
    win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 610, 125, m.shape[1] + 10, m.shape[0] + 40,
                          win32con.SWP_SHOWWINDOW)
    return m


def distance(a, b):
    p1 = np.array(a)
    p2 = np.array(b)
    p3 = p1 - p2
    p4 = math.hypot(p3[0], p3[1])
    return p4


def get_time(length):
    if length > 280:
        time = length / 312.001158116
        return time
    else:
        time = length / 306.001158116
        return time


def dian_ji(time1):
    mouse = Controller()
    mouse.press(Button.left)
    time.sleep(time1)
    mouse.release(Button.left)


def get_center(img_rgb, template):
    res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    h, w = template.shape[:2]
    top_left = max_loc
    center_loc = ((int)(max_loc[0] + w / 2), int(max_loc[1] + h / 2) + 36)
    a = cv2.circle(img_rgb, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    return max_loc, h, w, center_loc


def find_area(p1, p2):
    return abs(p1[0] - p2[0]) * abs(p1[1] - p2[1])


def pd_is_max(contours):
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
    return a, c


def find_left(masked):
    # detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(masked, 30, 30 * 3, apertureSize=3)
    dst = cv2.bitwise_and(masked, masked, mask=detected_edges)  # just add some colours to edges from original image.

    lap = masked.copy()
    contours, hierarchy = cv2.findContours(image=detected_edges, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    max = 50000
    min = 50000
    a = []
    b = []

    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][1] < min:
                    min = contours[i][j][k][1]
                if contours[i][j][k][0] < max:
                    max = contours[i][j][k][0]
    for i in range(len(contours)):
        for j in range(len(contours[i])):
            for k in range(len(contours[i][j])):
                if contours[i][j][k][1] == min:
                    a = contours[i][j][k]
                if contours[i][j][k][0] == max:
                    b.append(contours[i][j][k])

    Min = 50000
    c = []
    for i in range(len(b)):
        if b[i][1] < Min:
            c = b[i]

    c = [c[0], c[1] + 5]
    d = [a[0], c[1]]

    center = (a[0], int((a[1] + d[1]) / 2))

    cv2.circle(lap, (center[0], center[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (a[0], a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (c[0], c[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.drawContours(image=lap, contours=contours, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    cv2.imshow('canny demo', lap)
    return center


def find_right(masked):
    # detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(masked, 45, 40 * 3, apertureSize=3)
    dst = cv2.bitwise_and(masked, masked, mask=detected_edges)  # just add some colours to edges from original image.
    lap = masked.copy()
    contours, hierarchy = cv2.findContours(image=detected_edges, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    max = 0
    min = 50000
    a = []
    b = []

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

    Min = 50000
    c = []
    for i in range(len(b)):
        if b[i][1] < Min:
            c = b[i]

    d = (a[0], c[1])

    cv2.circle(lap, (a[0], a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (c[0], c[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (d[0], d[1]), 1, (0, 255, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.drawContours(image=lap, contours=contours, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    cv2.imshow('canny demo', lap)
    return d


def RemoveDir(filepath):
    '''
    如果文件夹不存在就创建，如果文件存在就清空！

    '''
    if not os.path.exists(filepath):
        os.mkdir(filepath)
    else:
        shutil.rmtree(filepath)
        os.mkdir(filepath)

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

    co = img[arr[5][1] + change1][arr[5][0] + change2]
    tep = []
    arr = np.array(arr)

    for i in range(len(arr)):
        if arr[i][1] == arr.min(0)[1]:
            tep.append(arr[i])
    tep = np.array(tep)
    co = img[tep[0][1] + change1][int(tep.mean(axis=0)[0]) + change2]
    print("coo", co)


    arr1 = []
    for y in range(A):
        for x in range(B):
            # not (img[y][x] == co).all():
            # 原来是10
            if abs((int(img[y][x][0]) - int(co[0]))) >= m or abs(int(img[y][x][1]) - int(co[1])) >= m or abs(
                    int(img[y][x][2]) - int(co[2])) >= m:
                b = (x, y)
                arr1.append(b)
    if len(arr1) > 2:
        for i in arr1:
            img_copy[i[1]][i[0]][0] = 0
            img_copy[i[1]][i[0]][1] = 0
            img_copy[i[1]][i[0]][2] = 0
            # cv2.circle(img_copy, (i[0], i[1]), 1, (0, 0, 0), thickness=2, lineType=cv2.LINE_AA)
    # 判断两个特殊
    pd = 0
    if 150 < co[0] < 190 and 180 < co[1] < 210 and 220 < co[2] < 240:
        pd = 1
    if 100 < co[0] < 130 and 100 < co[1] < 130 and 140 < co[2] < 160:
        pd = 2
    print("pd", pd)

    arry3 = []
    for y in range(A):
        for x in range(B):
            # not (img[y][x] == co).all():
            if abs(int(img[y][x][0]) - 72) == 0 and abs(int(img[y][x][1]) - 72) == 0 and abs(
                    int(img[y][x][2]) - 72) == 0:
                b = (x, y)
                arry3.append(b)
    for i in arry3:
        img_copy[i[1]][i[0]][0] = 255
        img_copy[i[1]][i[0]][1] = 255
        img_copy[i[1]][i[0]][2] = 255
        # cv2.circle(img_copy, (i[0], i[1]), 1, (255, 255, 255), thickness=2, lineType=cv2.LINE_AA)
    # if len(arry) > 8:
    #     for i in arry:
    #         cv2.circle(img_copy, (i[0], i[1]), 1, (255, 255, 255), thickness=1, lineType=cv2.LINE_AA)
    # if len(arry2) > 8:
    #     for i in arry2:
    #         cv2.circle(img_copy, (i[0], i[1]), 1, (255, 255, 255), thickness=1, lineType=cv2.LINE_AA)
    cheak = 0
    count = 0
    for y in range(A):
        for x in range(B):
            if int(img_copy[y][x][0]) - int(co[0]) == 0 and int(img_copy[y][x][1]) - int(co[1]) == 0 and int(
                    img_copy[y][x][2]) - int(co[2]) == 0:
                count = count + 1
    if count >= 4:
        cheak = 1
    print("cheak=", cheak, "count=", count)
    #########################################################################################
    if cheak == 0:
        img_copy1 = img.copy()
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

        co = img[0][0]
        tep = []
        arr = np.array(arr)

        for i in range(len(arr)):
            if arr[i][1] == arr.min(0)[1]:
                tep.append(arr[i])
        tep = np.array(tep)
        co = img[tep[0][1] + change1 + 4][int(tep.mean(axis=0)[0]) + change2]
        # for i in arr:
        #     cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        print("co", co)
        arr1 = []
        for y in range(A):
            for x in range(B):
                # not (img[y][x] == co).all():
                # 原来是10
                if abs((int(img[y][x][0]) - int(co[0]))) >= m or abs(int(img[y][x][1]) - int(co[1])) >= m or abs(
                        int(img[y][x][2]) - int(co[2])) >= m:
                    b = (x, y)
                    arr1.append(b)
        if len(arr1) > 2:
            for i in arr1:
                img_copy1[i[1]][i[0]][0] = 0
                img_copy1[i[1]][i[0]][1] = 0
                img_copy1[i[1]][i[0]][2] = 0
                # cv2.circle(img_copy1, (i[0], i[1]), 1, (0, 0, 0), thickness=2, lineType=cv2.LINE_AA)
            return img_copy1, pd

    ########################
    a = img_copy
    cv2.circle(img_copy2, (int(tep.mean(axis=0)[0]) + change2, tep[0][1] + change1), 1, (255, 0, 0), thickness=1,
               lineType=cv2.LINE_AA)

    return a, pd


def get_c(img, place, img_fuzhi, pd, aimg, c):
    if pd == 0 or pd == 1:
        if place == "r":
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
            arr = np.array(arr)
            y_min = np.amin(arr, axis=0)[1]
            x_max = np.amax(arr, axis=0)[0]
            a = []
            b = []
            for i in arr:
                if i[1] == y_min:
                    a.append(i)
            a = np.array(a)

            a_a = [int(a.mean(axis=0)[0]), y_min]
            for i in arr:
                if i[0] == x_max:
                    # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                    b.append(i)
            b = np.array(b)
            b_b = [x_max, int(b.mean(axis=0)[1])]
            c = [a_a[0], b_b[1]]
            cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

            cv2.imshow("img", img)
            hwnd = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
            CVRECT = cv2.getWindowImageRect("img")
            win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 610, 525, img.shape[1] + 10, img.shape[0] + 40,
                                  win32con.SWP_SHOWWINDOW)
            return c
        else:
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
            arr = np.array(arr)
            y_min = np.amin(arr, axis=0)[1]
            x_max = np.amin(arr, axis=0)[0]
            a = []
            b = []
            for i in arr:
                if i[1] == y_min:
                    a.append(i)
            a = np.array(a)

            a_a = [int(a.mean(axis=0)[0]), y_min]
            for i in arr:
                if i[0] == x_max:
                    # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                    b.append(i)
            b = np.array(b)
            b_b = [x_max, int(b.mean(axis=0)[1])]
            c = [a_a[0], b_b[1]]
            cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

            cv2.imshow("lllllll", img)
            return c
    else:
        point_color = (0, 255, 0)  # BGR
        thickness = 1
        lineType = 4
        if pd == 2:
            templatea = aimg
            img_rgba = aimg
            if place == "r":
                templatea = cv2.imread("f:\\test\\test.png")
                res = cv2.matchTemplate(img_rgba, templatea, cv2.TM_CCOEFF_NORMED)
                min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
                h, w = templatea.shape[:2]
                top_left = max_loc
                center_loc = ((int)(max_loc[0] - w / 2 + 7), int(max_loc[1] - 35))
                a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                              thickness, lineType)

                cv2.imshow("asd", img_rgba)
                d = [center_loc[0] - (c[0] + 15), center_loc[1] - 300]
                return d
            else:
                templatea = cv2.imread("f:\\test\\test'.png")
                res = cv2.matchTemplate(img_rgba, templatea, cv2.TM_CCOEFF_NORMED)
                min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
                h, w = templatea.shape[:2]
                top_left = max_loc
                center_loc = ((int)(max_loc[0] + w + 11), int(max_loc[1] - 2))
                a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                              thickness, lineType)

                cv2.imshow("asd", img_rgba)
                d = [center_loc[0], center_loc[1]]
                return d

a = -1
p = "F:\\img\\"
RemoveDir(p)
image = pyscreenshot.grab(bbox=(1, 2, 450, 855))
image.save("f:\\img\\Snipaste_2022.png")
while 1:
    pyautogui.press('F1')
    pyautogui.hotkey('Ctrl', 'Shift', 's')
    a = a + 1
    path = p + "Snipaste_2022_" + str(a) + ".png"
    img = cv2.imread(path)
    zhuan_shu_img = img.copy()
    img_rgb = img.copy()
    template = cv2.imread('F:\Snipaste_2022_0.png')
    max_loc, h, w, center_loc = get_center(img, template)
    img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
    center = ()
    length = 0
    if center_loc[0] > img.shape[1] / 2:
        img = img[300:center_loc[1], 0:center_loc[0] - 15]
        img_copy2 = img.copy()
        img_fuzhi = img.copy()
        place = "left"
        getimg, pd = get_tol(img)
        get_img = get_img1(getimg, -1)

        center1 = get_c(get_img, place, img_fuzhi, pd, img, center_loc)
        center2 = [img.shape[1] + 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        print("     ###############################          ")
        dian_ji(time1)

    else:

        img = img[300:center_loc[1], center_loc[0] + 15:img.shape[1]]
        img_copy2 = img.copy()
        img_fuzhi = img.copy()
        place = "r"
        getimg, pd = get_tol(img)
        get_img = get_img1(getimg, 1)
        center1 = get_c(get_img, place, img_fuzhi, pd, zhuan_shu_img, center_loc)
        center2 = [0 - 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        print("   #################################            ")

        dian_ji(time1)

    cv2.waitKey(600)
    time.sleep(0.8)
