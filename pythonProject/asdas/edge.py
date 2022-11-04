import math
import shutil
import os

import win32api
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
import keyboard
import os

change1 = 4
change2 = 0

t = 38

m = 9

def findTitle(window_title):
    '''
    查找指定标题窗口句柄
    @param window_title: 标题名
    @return: 窗口句柄
    '''
    hWndList = []
    # 函数功能：该函数枚举所有屏幕上的顶层窗口，办法是先将句柄传给每一个窗口，然后再传送给应用程序定义的回调函数。
    win32gui.EnumWindows(lambda hWnd, param: param.append(hWnd), hWndList)
    for hwnd in hWndList:
        # 函数功能：该函数获得指定窗口所属的类的类名。
        # clsname = win32gui.GetClassName(hwnd)
        # 函数功能：该函数将指定窗口的标题条文本（如果存在）拷贝到一个缓存区内
        title = win32gui.GetWindowText(hwnd)
        if (title == window_title):
            print("标题：", title, "句柄：", hwnd)
            break
    return hwnd
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
    img2 = cv2.medianBlur(m, 5)
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
    if length > 300:
        time = length / 330.04126984
        return time
    elif length > 280:
        time = length / 330.04126984
        return time
    elif length > 150:
        time = length / 330.04126984
        return time
    else:
        time = length / 330.04126984
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
    keyboard.wait('s')
    window_title = u'跳一跳'
    hwnd = findTitle(window_title)
    p = win32api.GetCursorPos()
    #  GetWindowRect 获得整个窗口的范围矩形，窗口的边框、ss标题栏、滚动条及菜单等都在这个矩形内
    x, y, w, h = win32gui.GetWindowRect(hwnd)
    # 鼠标坐标减去指定窗口坐标为鼠标在窗口中的坐标值s
    pos_x = p[0] - x
    pos_y = p[1] - y
    # print(pos_x, pos_y)
    arr=[pos_x,pos_y]
    # print(arr)

    return arr


def get_c(img, place, img_fuzhi, pd, aimg, c, top):
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
        change1 = change1 + 2
        img1, pd, arr = get_tol(img_fuzhi, change1)
        print(change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c, arr)
        return d
    if len(contours1) == 1 and np.mean(area1) < 80:
        change1 = change1 + 2
        print(change1)
        img1, pd, arr = get_tol(img_fuzhi, change1)
        img2 = get_img1(img1, place)
        d = get_c(img2, place, img_fuzhi, pd, aimg, c, arr)
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
            y_max = np.amax(contours, axis=0)[1]
            x_min = np.amin(contours, axis=0)[0]
            arr_min = []
            for i in contours:
                if i[0] == x_min:
                    arr_min.append(i)
            Left = [x_min, int(np.mean(arr_min, axis=0)[1])]
            d = [top[0], Left[1]]
            cv2.circle(img_copy2, (Left[0], Left[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)

            cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
            cv2.line(img_copy2, (top[0], top[1]), (top[0], int(img_copy2.shape[0])), (0, 0, 255), thickness=1);

            cv2.line(img_copy2, (Left[0], Left[1]), (int(img_copy2.shape[1]), Left[1]), (0, 0, 255), thickness=1);
            cv2.imshow("img_cooy2", img_copy2)
            hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
            CVRECT = cv2.getWindowImageRect("img_cooy2")
            win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                  win32con.SWP_SHOWWINDOW)
            change1 = 2
            return d
            # if img.shape[1] - x_max < 20 or img.shape[0] - y_max < 20:
            #     min_1 = np.amin(contours, axis=0)[0]
            #     arr_min1 = []
            #     min_2 = np.amin(contours, axis=0)[1]
            #     arr_min2 = []
            #     for i in contours:
            #         if i[0] == min_1:
            #             arr_min1.append(i)
            #     for i in contours:
            #         if i[1] == min_2:
            #             arr_min2.append(i)
            #     arr_min1 = np.array(arr_min1)
            #     arr_min2 = np.array(arr_min2)
            #     a = [min_1, int(arr_min1.mean(axis=0)[1])]
            #     b = [int(arr_min2.mean(axis=0)[0]), min_2]
            #     d = [b[0], a[1]]
            #     cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
            #     cv2.imshow("img_cooy2", img_copy2)
            #     hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
            #     CVRECT = cv2.getWindowImageRect("img_cooy2")
            #     win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
            #                           win32con.SWP_SHOWWINDOW)
            #     change1 = 2
            #     return d
            # else:
            #     contours = np.array(contours)
            #     a = int(contours.mean(axis=0)[0])
            #     b = int(contours.mean(axis=0)[1])
            #     d = [a, b]
            #
            #     cv2.circle(img_copy2, (a, b), 1, (0, 0, 255), thickness=5, lineType=cv2.LINE_AA)
            #     cv2.imshow("img_cooy2", img_copy2)
            #     hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
            #     CVRECT = cv2.getWindowImageRect("img_cooy2")
            #     win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
            #                           win32con.SWP_SHOWWINDOW)
            #     change1 = 2
            #     return d

        else:
            x_min = np.amin(contours, axis=0)[0]
            y_max = np.amax(contours, axis=0)[1]
            x_max = np.amax(contours, axis=0)[0]
            print("xmmin", x_min)
            if img.shape[1] - x_max < 17 < x_min:
                x_min = np.amin(contours, axis=0)[0]
                arr_min = []
                for i in contours:
                    if i[0] == x_min:
                        arr_min.append(i)
                Left = [x_min, int(np.mean(arr_min, axis=0)[1])]
                d = [top[0], Left[1]]
                cv2.circle(img_copy2, (Left[0], Left[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)

                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
                cv2.line(img_copy2, (top[0], top[1]), (top[0], int(img_copy2.shape[0])), (0, 0, 255), thickness=1);

                cv2.line(img_copy2, (Left[0], Left[1]), (int(img_copy2.shape[1]), Left[1]), (0, 0, 255), thickness=1);
                cv2.imshow("img_cooy2", img_copy2)
                hwnd = win32gui.FindWindow(None, "img_cooy2")  # 获取句柄，然后置顶
                CVRECT = cv2.getWindowImageRect("img_cooy2")
                win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 910, 125, img.shape[1] + 10, img.shape[0] + 40,
                                      win32con.SWP_SHOWWINDOW)
                change1 = 2
                return d
            else:

                arr_max = []
                for i in contours:
                    if i[0] == x_max:
                        arr_max.append(i)
                print("arrmax", arr_max)
                Right = [x_max, int(np.min(arr_max, axis=0)[1])]
                d = [top[0], Right[1]]
                cv2.circle(img_copy2, (Right[0], Right[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)

                cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
                cv2.line(img_copy2, (top[0], top[1]), (top[0], int(img_copy2.shape[0])), (0, 0, 255), thickness=1);

                cv2.line(img_copy2, (Right[0], Right[1]), (int(img_copy2.shape[1]), Right[1]), (0, 0, 255),
                         thickness=1);
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
            d = [top[0], top[1] + 37]
            cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
            cv2.imshow("img_cooy2", img_copy2)

            return d
        elif pd == 3:
            d = [top[0], top[1] + 20]
            cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
            cv2.imshow("img_cooy2", img_copy2)

            return d
        elif pd == 4:
            d = [top[0] + 8, top[1] + 42]
            cv2.circle(img_copy2, (d[0], d[1]), 1, (0, 0, 255), thickness=2, lineType=cv2.LINE_AA)
            cv2.imshow("img_cooy2", img_copy2)

            return d


# a = 0
# img = cv2.imread("F:\\img\\Snipaste_2022_221.png" )
# zhuan_shu_img = img.copy()
# img_rgb = img.copy()
# template = cv2.imread('F:\\Snipaste_2022_0.png')s
# max_loc, h, w, center_loc = get_center(img, template)
# img = cv2.resize(img, (518, 975), interpolation=cv2.INTER_CUBIsC)
# center = ()
# length = 0
# if center_loc[0] > img.shape[1] / 2:
#
#     img = img[315:center_loc[1], 2:center_loc[0] - 15]
#     img_copy2 = img.copy()
#     img_fuzhi = img.copy()
#     place = "left"
#     arr = get_tol(img, change1)
#
#
#
#
#
# else:
#
#     img = img[315:center_loc[1], center_loc[0] + 15:img.shape[1]]
#     img_copy2 = img.copy()
#     img_fuzhi = img.copy()
#     place = "r"
#
#     arr = get_tol(img, change1)
#
#
#
# cv2.waitKey(0)

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
    img = cv2.resize(img, (518, 975), interpolation=cv2.INTER_CUBIC)
    center = ()
    length = 0
    if center_loc[0] > img.shape[1] / 2:

        img_copy2 = img.copy()
        img_fuzhi = img.copy()
        place = "left"
        try:
            arr = get_tol(img, change1)
        except:
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

        center1 = arr
        center2 = [center_loc[0], center_loc[1]]
        print("centerloc , center2",center_loc,center2)
        cv2.circle(img_copy2, (center1[0],center1[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.circle(img_copy2, (center2[0],center2[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)

        cv2.line(img_copy2, (center1[0],center1[1]), (center2[0],center2[1]), (0, 0, 255), thickness=1);
        cv2.imshow("asd",img_copy2)

        print(center1,center2)
        length = distance(center1, center2)
        time1 = get_time(length)
        print("time=  ",time1)
        dian_ji(time1)

        print("时间", time1)
        print("距离", length)
        print("change1", change1)
        print("#####################################################")

    else:

        img_copy2 = img.copy()
        img_fuzhi = img.copy()
        place = "r"
        try:
            arr = get_tol(img, change1)
        except:
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

        center1 = arr

        center2 = [center_loc[0], center_loc[1]]
        print("centerloc , center2",center_loc,center2)

        cv2.line(img_copy2, (center1[0],center1[1]), (center2[0],center2[1]), (0, 0, 255), thickness=1);
        cv2.circle(img_copy2, (center1[0], center1[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.circle(img_copy2, (center2[0], center2[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.imshow("asd",img_copy2)
        print(center1,center2)

        length = distance(center1, center2)
        time1 = get_time(length)
        print("time=  ",time1)

        dian_ji(time1)
        print("时间", time1)
        print("距离", length)
        print("change1", change1)
        print("#####################################################")

    cv2.waitKey(600)
    time.sleep(0.8)
cv2.waitKey(0)
