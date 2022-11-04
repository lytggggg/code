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

change1 = 2
change2 = 0

t = 38

m = 9


def distance(a, b):
    p1 = np.array(a)
    p2 = np.array(b)
    p3 = p1 - p2
    p4 = math.hypot(p3[0], p3[1])
    return p4


def get_time(length):
    if length > 300:
        time = length / 317.001158116
        return time
    elif length > 280:
        time = length / 312.001158116
        return time
    elif length > 150:
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


def get_tol(img, change1):
    keyboard.wait('s')
    window_title = u'跳一跳'
    hwnd = findTitle(window_title)
    p = win32api.GetCursorPos()
    #  GetWindowRect 获得整个窗口的范围矩形，窗口的边框、ss标题栏、滚动条及菜单等都在这个矩形内
    x, y, w, h = win32gui.GetWindowRect(hwnd)
    # 鼠标坐标减去指定窗口坐标为鼠标在窗口中的s坐标值ss
    pos_x = p[0] - x
    pos_y = p[1] - y
    # print(pos_x, pos_y)
    arr = [pos_x, pos_y]
    # print(arr)

    return arr


a = -1
p = "F:\\img\\"
rrr = "F:\\yolov5-6.0\\VOCdevkit\\VOC2007\\img\\"

RemoveDir(p)
image = pyscreenshot.grab(bbox=(1, 2, 450, 855))
image.save("f:\\img\\Snipaste_2022.png")
while 1:
    pyautogui.press('F1')
    time.sleep(0.1)
    pyautogui.hotkey('Ctrl', 'Shift', 's')
    a = a + 1
    b = a+66
    path = p + "Snipaste_2022_" + str(a) + ".png"
    rr = rrr + str(b) + ".png"

    img = cv2.imread(path)
    cv2.imwrite(rr, img)

    zhuan_shu_img = img.copy()
    img_rgb = img.copy()
    template = cv2.imread('F:\Snipaste_2022.png')
    max_loc, h, w, center_loc = get_center(img, template)
    img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)
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
        cv2.line(img_copy2, (center1[0], center1[1]), (center2[0], center2[1]), (0, 0, 255), thickness=1);
        cv2.circle(img_copy2, (center1[0], center1[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.circle(img_copy2, (center2[0], center2[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.imshow("asd", img_copy2)
        length = distance(center1, center2)
        time1 = get_time(length)
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
        cv2.line(img_copy2, (center1[0], center1[1]), (center2[0], center2[1]), (0, 0, 255), thickness=1);
        cv2.circle(img_copy2, (center1[0], center1[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.circle(img_copy2, (center2[0], center2[1]), 5, (255, 0, 255), thickness=3, lineType=cv2.LINE_AA)
        cv2.imshow("asd", img_copy2)
        length = distance(center1, center2)
        time1 = get_time(length)
        dian_ji(time1)
        print("时间", time1)
        print("距离", length)
        print("change1", change1)
        print("#####################################################")

    cv2.waitKey(600)
    time.sleep(0.8)
cv2.waitKey(0)
