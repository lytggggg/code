import math

import numpy
import win32con
import win32gui
from PIL import ImageGrab
from pynput.mouse import Button, Controller
import time
import cv2
import numpy as np
from numpy import *

change1=5
change2 = 0
t = 153
m = 5


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
    win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 610, 125, m.shape[1], m.shape[0] + 40,
                          win32con.SWP_SHOWWINDOW)
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
    co_o = img[tep[0][1] + 3][int(tep.mean(axis=0)[0])]
    pd = 0
    if 150 < co_o[0] < 190 and 180 < co_o[1] < 210 and 220 < co_o[2] < 240:
        pd = 1
    if 100 < co_o[0] < 130 and 100 < co_o[1] < 130 and 140 < co_o[2] < 160:
        pd = 2
    print("pd", pd)
    if pd == 2:
        return img_copy, pd
    Arr = []
    for y in range(A):
        for x in range(B):
            Arr.append(list(img[y][x]))

    unq, count = np.unique(Arr, axis=0, return_counts=True)
    unq = unq[count >= 100]
    tql = []
    for i in range(20):
        for j in unq:
            if (img[tep[0][1] + i + 2][int(tep.mean(axis=0)[0])] == j).all():
                print(j)
                tql.append(i)
                break
    if tql and pd != 1:
        print("tql", tql[0])
        co = img[tep[0][1] + tql[0] + 2][int(tep.mean(axis=0)[0])]
    else:
        co = img[tep[0][1] + 2][int(tep.mean(axis=0)[0])]
    # for i in arr:
    #     cv2.circle(img_copy, (i[0], i[1]), 1, (255, 0, 255), thickness=1, lineType=cv2.LINE_AA)

    arr1 = []
    arr2 = []

    print("co", co)

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
        # 判断两个特殊

    for y in range(A - 1):
        for x in range(B - 1):
            if x != 0 or x != B:
                a = np.array(img[y][x])
                a_1 = np.array(img[y - 1][x])
                a_2 = np.array(img[y + 1][x])
                a_3 = np.array(img[y][x - 1])
                a_4 = np.array(img[y][x + 1])
                a_5 = np.array(img[y + 1][x + 1])
                a_6 = np.array(img[y - 1][x - 1])
                a_7 = np.array(img[y + 1][x - 1])
                a_8 = np.array(img[y - 1][x + 1])

                if (a == a_1).all() == False and (a == a_2).all() == False and (a == a_3).all() == False and (
                        a == a_4).all() == False and (a == a_5).all() == False and (a == a_6).all() == False and (
                        a == a_7).all() == False and (
                        a == a_8).all() == False:
                    img_copy[y][x][0] = 0
                    img_copy[y][x][1] = 0
                    img_copy[y][x][2] = 0

    cheak = 0
    for y in range(A):
        for x in range(B):
            if int(img_copy[y][x][0]) - int(co[0]) == 0 and int(img_copy[y][x][1]) - int(co[1]) == 0 and int(
                    img_copy[y][x][2]) - int(co[2]) == 0:
                cheak = 1
                break
    print("cheak", cheak)
    # for i in arr2:
    #     cv2.circle(img_copy, (i[0], i[1]), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
    a = img_copy
    b = img_copy2
    # cv2.circle(img_copy2, (int(tep.mean(axis=0)[0]), tep[0][1] + tql[0]), 1, (255, 0, 0), thickness=1,
    #            lineType=cv2.LINE_AA)



    return a, pd


def get_c(img, place, img_fuzhi, pd, aimg, c):
    img_show=aimg.copy()
    if pd == 0 :
        if place == "r":
            arr = []

            A = int(img.shape[0])
            B = int(img.shape[1])
            for y in range(A):
                for x in range(B):
                    arr.append(list(img[y][x]))

            unq, count = np.unique(arr, axis=0, return_counts=True)
            unq = unq[count >= 100]
            print(unq)
            color = []
            for i in unq:
                if not (i == np.array([0, 0, 0])).all():
                    color = i
            num = []
            for y in range(A):
                for x in range(B):
                    if (img[y][x] == color).all():
                        a = (x, y)
                        num.append(a)
            num = np.array(num)

            if np.amin(num, axis=0)[0] < 5:
                y_min = np.amin(num, axis=0)[1]
                x_max = np.amax(num, axis=0)[0]
                a = []
                b = []
                for i in num:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in num:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]

                c = [a_a[0], b_b[1]]
                # cv2.circle(img, (a_a[0], a_a[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                # cv2.circle(img, (b_b[0], b_b[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_show, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.imshow("img", img)
                cv2.imshow("img_show", img_show)

                hwnd = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1], img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                return c
            else:
                x = int(np.mean(num, axis=0)[0])
                y = int(np.mean(num, axis=0)[1])
                cv2.circle(img, (x, y), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_show, (x, y), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                c = [x, y]
                cv2.imshow("img", img)
                cv2.imshow("img_show", img_show)

                hwnd = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1], img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                return c
            # arr = []
            #
            # A = int(img.shape[0])
            # B = int(img.shape[1])
            # for y in range(A):
            #     for x in range(B):
            #         arr.append(list(img[y][x]))
            #
            # unq, count = np.unique(arr, axis=0, return_counts=True)
            # unq = unq[count >= 100]
            # color = []
            # for i in unq:
            #     if not (i == np.array([0, 0, 0])).all():
            #         color = i
            # num = []
            # for y in range(A):
            #     for x in range(B):
            #         if (img[y][x] == color).all():
            #             a = (x, y)
            #             num.append(a)
            # num = np.array(num)
            # y_min = np.amin(num, axis=0)[1]
            # x_max = np.amax(num, axis=0)[0]
            # a = []
            # b = []
            # for i in num:
            #     if i[1] == y_min:
            #         a.append(i)
            # a = np.array(a)
            #
            # a_a = [int(a.mean(axis=0)[0]), y_min]
            # for i in num:
            #     if i[0] == x_max:
            #         # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            #         b.append(i)
            # b = np.array(b)
            # b_b = [x_max, np.amin(b, axis=0)[1]]
            #
            # c = [a_a[0], b_b[1]]
            # cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            # cv2.imshow("lllllll", img)
            # print(c)
            # return c
            ###########################################################################################
            # arr = []
            # A = int(img.shape[0])
            # B = int(img.shape[1])
            # for y in range(A):
            #     for x in range(B):
            #         if x != 0:
            #             temp1 = int(img[y][x][0]) - int(img[y][x - 1][0])
            #             temp2 = int(img[y][x][1]) - int(img[y][x - 1][1])
            #             temp3 = int(img[y][x][2]) - int(img[y][x - 1][2])
            #             if abs(temp1) > 5 or abs(temp2) > 5 or abs(temp3) > 5:
            #                 a = (x, y)
            #                 arr.append(a)
            # arr = np.array(arr)
            # y_min = np.amin(arr, axis=0)[1]
            # x_max = np.amax(arr, axis=0)[0]
            # a = []
            # b = []
            # for i in arr:
            #     if i[1] == y_min:
            #         a.append(i)
            # a = np.array(a)
            #
            # a_a = [int(a.mean(axis=0)[0]), y_min]
            # for i in arr:
            #     if i[0] == x_max:
            #         # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            #         b.append(i)
            # b = np.array(b)
            # b_b = [x_max, np.amin(b, axis=0)[1]]
            #
            # c = [a_a[0], b_b[1]]
            # # cv2.circle(img, (a_a[0], a_a[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            # # cv2.circle(img, (b_b[0], b_b[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            # cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            # print(img[b_b[1]+1][b_b[0]])
            # cv2.imshow("lllllll", img)
            # return c
        else:
            arr = []

            A = int(img.shape[0])
            B = int(img.shape[1])
            for y in range(A):
                for x in range(B):
                    arr.append(list(img[y][x]))

            unq, count = np.unique(arr, axis=0, return_counts=True)
            unq = unq[count >= 100]

            color = []
            for i in unq:
                if not (i == np.array([0, 0, 0])).all():
                    color = i
            num = []
            for y in range(A):
                for x in range(B):
                    if (img[y][x] == color).all():
                        a = (x, y)
                        num.append(a)
            num = np.array(num)
            if np.amax(num, axis=0)[0] > img.shape[1] - 6:
                y_min = np.amin(num, axis=0)[1]
                x_max = np.amin(num, axis=0)[0]
                a = []
                b = []
                for i in num:
                    if i[1] == y_min:
                        a.append(i)
                a = np.array(a)

                a_a = [int(a.mean(axis=0)[0]), y_min]
                for i in num:
                    if i[0] == x_max:
                        # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                        b.append(i)
                b = np.array(b)
                b_b = [x_max, np.amin(b, axis=0)[1]]
                c = [a_a[0], b_b[1]]
                cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_show, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                cv2.imshow("img", img)
                cv2.imshow("img_show", img_show)
                hwnd = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1], img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                return c
            else:
                x = int(np.mean(num, axis=0)[0])
                y = int(np.mean(num, axis=0)[1])
                cv2.circle(img, (x, y), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
                cv2.circle(img_show, (x,y), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

                c = [x, y]
                cv2.imshow("img", img)
                cv2.imshow("img_show", img_show)

                hwnd = win32gui.FindWindow(None, "img")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1], img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)

                hwnd1 = win32gui.FindWindow(None, "img_show")  # 获取句柄，然后置顶
                CVRECT1 = cv2.getWindowImageRect("img_show")
                win32gui.SetWindowPos(hwnd1, win32con.HWND_TOPMOST, 610, 425, img_show.shape[1], img_show.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                return c
            # arr = []
            # A = int(img.shape[0])
            # B = int(img.shape[1])
            # for y in range(A):
            #     for x in range(B):
            #         if x != 0:
            #             temp1 = int(img[y][x][0]) - int(img[y][x - 1][0])
            #             temp2 = int(img[y][x][1]) - int(img[y][x - 1][1])
            #             temp3 = int(img[y][x][2]) - int(img[y][x - 1][2])
            #             if abs(temp1) > 5 or abs(temp2) > 5 or abs(temp3) > 5:
            #                 a = (x, y)
            #                 arr.append(a)
            # arr = np.array(arr)
            # y_min = np.amin(arr, axis=0)[1]
            # x_max = np.amin(arr, axis=0)[0]
            # a = []
            # b = []
            # for i in arr:
            #     if i[1] == y_min:
            #         a.append(i)
            # a = np.array(a)
            #
            # a_a = [int(a.mean(axis=0)[0]), y_min]
            # for i in arr:
            #     if i[0] == x_max:
            #         # cv2.circle(img, (i[0], i[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            #         b.append(i)
            # b = np.array(b)
            # b_b = [x_max, np.amin(b, axis=0)[1]]
            # c = [a_a[0], b_b[1]]
            # cv2.circle(img, (c[0], c[1]), 1, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            #
            # cv2.imshow("lllllll", img)
            # return c
    elif pd == 2:
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
            center_loc = ((int)(max_loc[0] -16), int(max_loc[1] -2))
            a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                          thickness, lineType)

            cv2.imshow("asd", img_rgba)
            d = [center_loc[0] - (c[0] + 15), center_loc[1] - 300]
            return d
        else:
            templatea = cv2.imread("f:\\test\\y1.png")
            res = cv2.matchTemplate(img_rgba, templatea, cv2.TM_CCOEFF_NORMED)
            min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
            h, w = templatea.shape[:2]
            top_left = max_loc
            center_loc = ((int)(max_loc[0] + w + 13), int(max_loc[1] +2))
            a = cv2.circle(img_rgba, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
            cv2.rectangle(img_rgba, (max_loc[0], max_loc[1]), (max_loc[0] + w, max_loc[1] + h), point_color,
                          thickness, lineType)

            cv2.imshow("asd", img_rgba)
            d = [center_loc[0], center_loc[1]]
            return d

a = 0
img = cv2.imread("F:\\test\\Snipaste_2022_" + str(t) + ".png")
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
    getimg, pd = get_tol(img)
    get_img = get_img1(getimg, -1)

    center1 = get_c(get_img, place, img_fuzhi, pd, img, center_loc)
    center2 = [img.shape[1] + 15, img.shape[0]]
    length = distance(center1, center2)
    time1 = get_time(length)
    print("时间", time1)
    print("距离", length)

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

cv2.waitKey(0)
