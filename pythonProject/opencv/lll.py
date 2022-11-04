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
import sys
from numpy import *

import os

change1 = 2
change2 = 0

t = 14

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


def get_img1(img, place):
    pt_1 = ()
    pt_2 = ()
    pt_3 = ()
    pt_4 = ()
    pt_5 = ()
    if place == "left":
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
    img2 = cv2.medianBlur(m, 3)
    cv2.imshow("img2", img2)

    hwnd = win32gui.FindWindow(None, "img2")  # 获取句柄，然后置顶
    CVRECT = cv2.getWindowImageRect("img2")
    win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 610, 125, img2.shape[1] + 10, img2.shape[0] + 40,
                          win32con.SWP_SHOWWINDOW)
    return img2


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


def RemoveDir(filepath):
    '''
    如果文件夹不存在就创建，如果文件存在就清空！

    '''
    if not os.path.exists(filepath):
        os.mkdir(filepath)
    else:
        shutil.rmtree(filepath)
        os.mkdir(filepath)


def get_tol(img, change1):
    if len(img) == 0:
        return img, -1
    img_copy = img.copy()
    # img_test=img.copy()
    # img_test = cv2.cvtColor(img_test, cv2.COLOR_BGR2GRAY)
    # img_test = cv2.GaussianBlur(img_test, (3, 3), cv2.BORDER_DEFAULT)
    # img_test = cv2.Canny(img_test, 50, 50)
    # contours1, hierarchy = cv2.findContours(image=img_test, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    # contours = []
    # for obj in contours1:
    #     for i in obj:
    #         i = i.squeeze()
    #         i = i.tolist()
    #
    #         contours.append(i)
    # zui_min = np.amin(contours, axis=0)[1]
    # arr_min = []
    # for i in contours:
    #     if i[1] == zui_min:
    #         arr_min.append(i)
    # arr = [int(np.mean(arr_min, axis=0)[0]), zui_min]
    # # if len(co) == 0:
    # #     return img, -1
    # co = img[arr[0]][arr[1] ]
    # print("co",co)
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
    if len(co) == 0:
        return img, -1
    tep = []
    arr = np.array(arr)

    for i in range(len(arr)):
        if arr[i][1] == arr.min(0)[1]:
            tep.append(arr[i])
    tep = np.array(tep)

    try:
        co = img[tep[0][1] + change1][int(tep.mean(axis=0)[0]) + change2]
    except IndexError:
        return img, -1
    for i in arr:
        cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

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
            # cv2.circle(img_copy, (i[0], i[1]), 1, (0, 0, 0), thickness=1, lineType=cv2.LINE_AA)
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
        # cv2.circle(img_copy, (i[0], i[1]), 1, (255, 255, 255), thickness=1, lineType=cv2.LINE_AA)

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
                # cv2.circle(img_copy1, (i[0], i[1]), 1, (0, 0, 0), thickness=1, lineType=cv2.LINE_AA)
            return img_copy1, pd

    a = img_copy
    cv2.circle(img_copy2, (int(tep.mean(axis=0)[0]) + change2, tep[0][1] + change1), 1, (255, 0, 0), thickness=1,
               lineType=cv2.LINE_AA)

    return a, pd


def get_c(img, place, img_fuzhi, pd, aimg, c):
    global change1

    cv2.imshow("ppp", img_fuzhi)
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img = cv2.GaussianBlur(img, (3, 3), cv2.BORDER_DEFAULT)
    img = cv2.Canny(img, 50, 50)
    # img = cv2.dilate(img, (5, 5), iterations=2)
    # img = cv2.erode(img, (5, 5), iterations=2)

    contours1, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(image=img_copy2, contours=contours1, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    print("len", len(contours1))
    area1 = []
    for obj in contours1:
        ret = cv2.minAreaRect(obj)
        pts = cv2.boxPoints(ret)
        area1.append(cv2.contourArea(pts))
    print("area", np.mean(area1))
    if len(contours1) == 0:
        change1 = change1 + 1
        img1, pd = get_tol(img_fuzhi, change1)
        print(change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c)
        return d
    if len(contours1) == 1 and np.mean(area1) < 30:
        change1 = change1 + 1
        print(change1)
        img1, pd = get_tol(img_fuzhi, change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c)
        return d

    contours = []
    for obj in contours1:
        for i in obj:
            i = i.squeeze()
            i = i.tolist()

            contours.append(i)
    if pd == 0:
        if place == "left":
            x_max = np.amax(contours, axis=0)[0]
            if img.shape[1] - x_max < 20:
                min_1 = np.amin(contours, axis=0)[0]
                arr_min1 = []
                min_2 = np.amin(contours, axis=0)[1]
                arr_min2 = []
                for i in contours:
                    if i[0] == min_1:
                        arr_min1.append(i)
                for i in contours:
                    if i[1] == min_2:
                        arr_min2.append(i)
                arr_min1 = np.array(arr_min1)
                arr_min2 = np.array(arr_min2)
                a = [min_1, int(arr_min1.mean(axis=0)[1])]
                b = [int(arr_min2.mean(axis=0)[0]), min_2]
                d = [b[0], a[1]]
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
                cv2.imshow("img_cooy2", img_copy2)
                hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img_cooy2")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1 = 2
                return d
            else:
                contours = np.array(contours)
                a = int(contours.mean(axis=0)[0])
                b = int(contours.mean(axis=0)[1])
                d = [a, b]

                cv2.circle(img_copy2, (a, b), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
                cv2.imshow("img_cooy2", img_copy2)
                hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img_cooy2")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1 = 2
                return d

        else:
            x_min = np.amin(contours, axis=0)[0]
            if x_min < 20:
                max_1 = np.amax(contours, axis=0)[0]
                arr_min1 = []
                min_2 = np.amin(contours, axis=0)[1]
                arr_min2 = []
                for i in contours:
                    if i[0] == max_1:
                        arr_min1.append(i)
                for i in contours:
                    if i[1] == min_2:
                        arr_min2.append(i)
                arr_min1 = np.array(arr_min1)
                arr_min2 = np.array(arr_min2)
                a = [max_1, int(arr_min1.mean(axis=0)[1])]
                b = [int(arr_min2.mean(axis=0)[0]), min_2]
                d = [b[0], a[1]]
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
                cv2.imshow("img_cooy2", img_copy2)
                hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img_cooy2")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1 = 2
                return d
            else:
                contours = np.array(contours)
                a = int(contours.mean(axis=0)[0])
                b = int(contours.mean(axis=0)[1])
                d = [a, b]
                print("a,b", [a, b])
                cv2.circle(img_copy2, (a, b), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
                cv2.imshow("img_cooy2", img_copy2)
                hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img_cooy2")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1 = 2
                return d

    else:
        point_color = (0, 255, 0)  # BGR
        thickness = 1
        lineType = 4
        if pd == 2:
            point_color = (0, 255, 0)  # BGR
            thickness = 1
            lineType = 4
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

                change1 = 2
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

                change1 = 2
                return d


        elif pd == 1:
            point_color = (0, 255, 0)  # BGR
            thickness = 1
            lineType = 4
            templatea = aimg
            img_rgba = aimg
            if place == "r":
                templatea = cv2.imread("f:\\test\\y2.png")
                res = cv2.matchTemplate(img_rgba, templatea, cv2.TM_CCOEFF_NORMED)
                min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
                h, w = templatea.shape[:2]
                top_left = max_loc
                center_loc = ((int)(max_loc[0] - 16), int(max_loc[1] - 2))
                a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                              thickness, lineType)

                cv2.imshow("asd", img_rgba)
                d = [center_loc[0] - (c[0] + 15), center_loc[1] - 300]

                change1 = 2
                return d
            else:
                templatea = cv2.imread("f:\\test\\y1.png")
                res = cv2.matchTemplate(img_rgba, templatea, cv2.TM_CCOEFF_NORMED)
                min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
                h, w = templatea.shape[:2]
                top_left = max_loc
                center_loc = ((int)(max_loc[0] + w + 13), int(max_loc[1] + 2))
                a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                              thickness, lineType)

                cv2.imshow("asd", img_rgba)
                d = [center_loc[0], center_loc[1]]
                change1 = 2
                return d


a = 0
img = cv2.imread("F:\\img\\Snipaste_2022_" + str(t) + ".png")
zhuan_shu_img = img.copy()
img_rgb = img.copy()
template = cv2.imread('F:\\Snipaste_2022_0.png')
max_loc, h, w, center_loc = get_center(img, template)
img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
center = ()
length = 0
if center_loc[0] > img.shape[1] / 2:

    img = img[300:center_loc[1], 0:center_loc[0] - 15]
    img_copy2 = img.copy()
    img_fuzhi = img.copy()
    place = "left"
    getimg, pd = get_tol(img, change1)
    if pd == -1:
        print("-1")
    get_img = get_img1(getimg, place)

    center1 = get_c(get_img, place, img_fuzhi, pd, img, center_loc)
    # center2 = [img.shape[1] + 15, img.shape[0]]
    # length = distance(center1, center2)
    # time1 = get_time(length)
    #
    # print("时间", time1)
    # print("距离", length)
    # print("change1", change1)
else:

    img = img[300:center_loc[1], center_loc[0] + 15:img.shape[1]]
    img_copy2 = img.copy()
    img_fuzhi = img.copy()
    place = "r"
    getimg, pd = get_tol(img, change1)
    if pd == -1:
        print("-1")
    #     pyautogui.moveTo(302, 751)
    #     time.sleep(5)
    #     pyautogui.click()
    #     time.sleep(0.5)
    #     pyautogui.moveTo(850, 370)
    #     time.sleep(1)
    #     pyautogui.click()
    #     time.sleep(0.5)
    #     pyautogui.moveTo(230, 360)
    #     time.sleep(1)
    #     pyautogui.hotkey('shift', 'F10')

    get_img = get_img1(getimg, place)
    center1 = get_c(get_img, place, img_fuzhi, pd, zhuan_shu_img, center_loc)
    # center2 = [0 - 15, img.shape[0]]
    # length = distance(center1, center2)
    # time1 = get_time(length)
    # print("时间", time1)
    # print("距离", length)
    # print("change1", change1)

cv2.waitKey(0)
