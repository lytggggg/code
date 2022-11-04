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
change1 = 3
change2 = 2
change_1 = change1
t = 81
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
    elif length >150:
        time = length / 306.001158116
        return time
    else:
        time = length / 300.001158116
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
    try:

        co = img[tep[0][1] + change1][int(tep.mean(axis=0)[0]) + change2]
    except IndexError:
        return img,-1
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
    # arry = []
    # for y in range(A):
    #     for x in range(B):
    #         # not (img[y][x] == co).all():
    #         if abs(int(img[y][x][0]) - 200) <= 2 and abs(int(img[y][x][1]) - 220) <= 2 and abs(
    #                 int(img[y][x][2]) - 240) <= 2:
    #             b = (x, y)
    #             arry.append(b)
    # arry2 = []
    # for y in range(A):
    #     for x in range(B):
    #         # not (img[y][x] == co).all():
    #         if abs(int(img[y][x][0]) - 116) == 0 and abs(int(img[y][x][1]) - 121) == 0 and abs(
    #                 int(img[y][x][2]) - 136) == 0:
    #             b = (x, y)
    #             arry2.append(b)
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
        # arry = []
        # for y in range(A):
        #     for x in range(B):
        #         # not (img[y][x] == co).all():
        #         if abs(int(img[y][x][0]) - 200) <= 2 and abs(int(img[y][x][1]) - 220) <= 2 and abs(
        #                 int(img[y][x][2]) - 240) <= 2:
        #             b = (x, y)
        #             arry.append(b)
        # arry2 = []
        # for y in range(A):
        #     for x in range(B):
        #         # not (img[y][x] == co).all():
        #         if abs(int(img[y][x][0]) - 116) == 0 and abs(int(img[y][x][1]) - 121) == 0 and abs(
        #                 int(img[y][x][2]) - 136) == 0:
        #             b = (x, y)
        #             arry2.append(b)
        # arry3 = []
        # for y in range(A):
        #     for x in range(B):
        #         # not (img[y][x] == co).all():
        #         if abs(int(img[y][x][0]) - 72) == 0 and abs(int(img[y][x][1]) - 72) == 0 and abs(
        #                 int(img[y][x][2]) - 72) == 0:
        #             b = (x, y)
        #             arry3.append(b)
        # for i in arry3:
        #     cv2.circle(img_copy1, (i[0], i[1]), 1, (255, 255, 255), thickness=1, lineType=cv2.LINE_AA)
        # return img_copy1
    ########################
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
    # img = cv2.dilate(img, (10, 10), iterations=2)
    # img = cv2.erode(img, (10, 10), iterations=2)

    contours1, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(image=img_copy2, contours=contours1, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    # cv2.circle(img, (200, 157), 1, (255, 255, 255), thickness=5, lineType=cv2.LINE_AA)
    area1 = []
    for obj in contours1:
        ret = cv2.minAreaRect(obj)
        pts = cv2.boxPoints(ret)
        area1.append(cv2.contourArea(pts))
        # pts = np.int0(pts)
        # cv2.drawContours(img_copy2, [pts], -1, (0, 0, 255), 2)

    area = []
    temp = []
    contours = []

    print("length", len(contours1))
    if len(contours1) > 1:
        for obj in contours1:
            if cv2.contourArea(obj) != 0:
                print(cv2.contourArea(obj))
                temp.append(obj)
                area.append(cv2.contourArea(obj))
        print("area", len(area), area)
        print("Variance of array : ", np.std(area1), )
        if len(area) != 0 and pd == 0:

            zui_da = max(area)
            zui_xiao = min(area)

            if len(area) == 2:
                # contours.append(contours1[1])

                if np.std(area1) < 150:
                    for obj in temp:
                        obj = obj.squeeze()
                        obj = obj.tolist()
                        contours.append(obj)
                else:
                    print("c", cv2.contourArea(temp[1]))
                    temp[1] = temp[1].squeeze()
                    temp[1] = temp[1].tolist()
                    contours.append(temp[1])

            if 0 <= len(area) < 2 or 2 < len(area) <= 4:
                if np.std(area1) < 120:
                    for obj in temp:
                        if cv2.contourArea(obj) != 0:
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)

                else:
                    for obj in temp:
                        if cv2.contourArea(obj) == max(area):
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)

            if len(area) > 4:
                if np.std(area1) < 310:
                    for obj in temp:
                        if cv2.contourArea(obj) != 0:
                            obj = obj.squeeze()
                            obj = obj.tolist()

                            contours.append(obj)

                else:
                    for obj in temp:
                        if cv2.contourArea(obj) == zui_da:
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)
            contours = [token for st in contours for token in st]
            print("lenen", contours)
            if place == "r":
                y_min = np.amin(contours, axis=0)[1]
                x_max = np.amax(contours, axis=0)[0]
                a = []
                b = []
                for i in contours:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in contours:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]
                d = [a_a[0], b_b[1]]
                print(a_a, b_b, d)
                cv2.circle(img_copy2, (a_a[0], a_a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (b_b[0], b_b[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                cv2.imshow("csa", img_copy2)
                hwnd1 = win32gui.FindWindow(None, "csa")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("csa")
                win32gui.SetWindowPos(hwnd1, win32con.HWND_TOPMOST, 900, 120, img_copy2.shape[1] + 10,
                                      img_copy2.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                cv2.imshow("img", img)
                hwnd2 = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT1 = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd2, win32con.HWND_TOPMOST, 1200, 120, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1=3
                return d
            else:
                y_min = np.amin(contours, axis=0)[1]
                x_max = np.amin(contours, axis=0)[0]
                a = []
                b = []
                for i in contours:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in contours:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]
                d = [a_a[0], b_b[1]]

                cv2.circle(img_copy2, (a_a[0], a_a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (b_b[0], b_b[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                cv2.imshow("csa", img_copy2)
                hwnd1 = win32gui.FindWindow(None, "csa")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("csa")
                win32gui.SetWindowPos(hwnd1, win32con.HWND_TOPMOST, 900, 120, img_copy2.shape[1] + 10,
                                      img_copy2.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                cv2.imshow("img", img)
                hwnd2 = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT1 = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd2, win32con.HWND_TOPMOST, 1200, 120, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1=3

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
                    change1 = 3

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
                    change1 = 3

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
                    change1 = 3

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
                    change1 = 3

                    return d
    if len(contours1) == 0:
        change1 = change1 + 1
        img1, pd = get_tol(img_fuzhi, change1)
        print(change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c)
        return d
    if len(contours1) == 1 and area1[0] < 107:
        change1 = change1 + 1
        print(change1)
        img1, pd = get_tol(img_fuzhi, change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c)
        return d
    else:

        for obj in contours1:
            if cv2.contourArea(obj) != 0:
                print(cv2.contourArea(obj))
                temp.append(obj)
                area.append(cv2.contourArea(obj))
        print("area", len(area), area)
        print("Variance of array : ", np.std(area1), )
        if len(area) != 0 and pd == 0:

            zui_da = max(area)
            zui_xiao = min(area)

            if len(area) == 2:
                # contours.append(contours1[1])

                if np.std(area1) < 150:
                    for obj in temp:
                        obj = obj.squeeze()
                        obj = obj.tolist()
                        contours.append(obj)
                else:
                    print("c", cv2.contourArea(temp[1]))
                    temp[1] = temp[1].squeeze()
                    temp[1] = temp[1].tolist()
                    contours.append(temp[1])

            if 0 <= len(area) < 2 or 2 < len(area) <= 4:
                if np.std(area1) < 120:
                    for obj in temp:
                        if cv2.contourArea(obj) != 0:
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)

                else:
                    for obj in temp:
                        if cv2.contourArea(obj) == max(area):
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)

            if len(area) > 4:
                if np.std(area1) < 310:
                    for obj in temp:
                        if cv2.contourArea(obj) != 0:
                            obj = obj.squeeze()
                            obj = obj.tolist()

                            contours.append(obj)

                else:
                    for obj in temp:
                        if cv2.contourArea(obj) == zui_da:
                            obj = obj.squeeze()
                            obj = obj.tolist()
                            contours.append(obj)
            contours = [token for st in contours for token in st]
            print("lenen", contours)
            if place == "r":
                y_min = np.amin(contours, axis=0)[1]
                x_max = np.amax(contours, axis=0)[0]
                a = []
                b = []
                for i in contours:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in contours:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]
                d = [a_a[0], b_b[1]]

                cv2.circle(img_copy2, (a_a[0], a_a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (b_b[0], b_b[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                cv2.imshow("csa", img_copy2)
                hwnd1 = win32gui.FindWindow(None, "csa")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("csa")
                win32gui.SetWindowPos(hwnd1, win32con.HWND_TOPMOST, 900, 120, img_copy2.shape[1] + 10,
                                      img_copy2.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                cv2.imshow("img", img)
                hwnd2 = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT1 = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd2, win32con.HWND_TOPMOST, 1200, 120, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1=3

                return d
            else:
                y_min = np.amin(contours, axis=0)[1]
                x_max = np.amin(contours, axis=0)[0]
                a = []
                b = []
                for i in contours:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in contours:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]
                d = [a_a[0], b_b[1]]

                cv2.circle(img_copy2, (a_a[0], a_a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (b_b[0], b_b[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                cv2.imshow("csa", img_copy2)
                hwnd1 = win32gui.FindWindow(None, "csa")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("csa")
                win32gui.SetWindowPos(hwnd1, win32con.HWND_TOPMOST, 900, 120, img_copy2.shape[1] + 10,
                                      img_copy2.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                cv2.imshow("img", img)
                hwnd2 = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT1 = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd2, win32con.HWND_TOPMOST, 1200, 120, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1=3
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
                    change1 = 3

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
                    change1 = 3

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
                    change1 = 3
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
                    change1 = 3

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
        getimg, pd = get_tol(img, change1)
        if pd==-1:
            pyautogui.moveTo(302, 751)
            time.sleep(7)
            pyautogui.click()
            time.sleep(0.5)
            pyautogui.moveTo(850, 570)
            time.sleep(7)
            pyautogui.click()
            time.sleep(7)
            pyautogui.moveTo(230, 360)
            time.sleep(5)
            pyautogui.hotkey('shift', 'F10')
        get_img = get_img1(getimg, place)

        center1 = get_c(get_img, place, img_fuzhi, pd, img, center_loc)
        center2 = [img.shape[1] + 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        dian_ji(time1)

        print("时间", time1)
        print("距离", length)
        print("change1", change1)
    else:

        img = img[300:center_loc[1], center_loc[0] + 15:img.shape[1]]
        img_copy2 = img.copy()
        img_fuzhi = img.copy()
        place = "r"
        getimg, pd = get_tol(img, change1)
        if pd==-1:
            pyautogui.moveTo(302, 751)
            time.sleep(7)
            pyautogui.click()
            time.sleep(0.5)
            pyautogui.moveTo(850, 570)
            time.sleep(7)
            pyautogui.click()
            time.sleep(7)
            pyautogui.moveTo(230, 360)
            time.sleep(5)
            pyautogui.hotkey('shift', 'F10')
        get_img = get_img1(getimg, place)
        center1 = get_c(get_img, place, img_fuzhi, pd, zhuan_shu_img, center_loc)
        center2 = [0 - 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        dian_ji(time1)
        print("时间", time1)
        print("距离", length)
        print("change1", change1)

    cv2.waitKey(600)
    time.sleep(0.8)

# a = 0
# img = cv2.imread("F:\\test\\Snipaste_2022_" + str(t) + ".png")
# zhuan_shu_img = img.copy()
# img_rgb = img.copy()
# template = cv2.imread('F:\\Snipaste_2022_0.png')
# max_loc, h, w, center_loc = get_center(img, template)
# img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
# center = ()
# length = 0
# if center_loc[0] > img.shape[1] / 2:
#
#     img = img[300:center_loc[1], 0:center_loc[0] - 15]
#     img_copy2 = img.copy()
#     img_fuzhi = img.copy()
#     place = "left"
#     getimg, pd = get_tol(img, change1)
#     get_img = get_img1(getimg, place)
#
#     center1 = get_c(get_img, place, img_fuzhi, pd, img, center_loc)
#     center2 = [img.shape[1] + 15, img.shape[0]]
#     length = distance(center1, center2)
#     time1 = get_time(length)
#
#     print("时间", time1)
#     print("距离", length)
#     print("change1", change1)
# else:
#
#     img = img[300:center_loc[1], center_loc[0] + 15:img.shape[1]]
#     img_copy2 = img.copy()
#     img_fuzhi = img.copy()
#     place = "r"
#     getimg, pd = get_tol(img, change1)
#     get_img = get_img1(getimg, place)
#     center1 = get_c(get_img, place, img_fuzhi, pd, zhuan_shu_img, center_loc)
#     center2 = [0 - 15, img.shape[0]]
#     length = distance(center1, center2)
#     time1 = get_time(length)
#     print("时间", time1)
#     print("距离", length)
#     print("change1", change1)
#
# cv2.waitKey(0)
