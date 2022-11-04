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
from pymouse import PyMouse

change1=5
change2 = 0
t = 562
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
    a_rr = []
    A = int(img.shape[0])
    B = int(img.shape[1])
    for y in range(A):
        for x in range(B):
            if x != 0:
                t_emp1 = int(img[y][x][0]) - int(img[y][x - 1][0])
                t_emp2 = int(img[y][x][1]) - int(img[y][x - 1][1])
                t_emp3 = int(img[y][x][2]) - int(img[y][x - 1][2])
                if abs(t_emp1) > 5 or abs(t_emp2) > 5 or abs(t_emp3) > 5:
                    a = (x, y)
                    a_rr.append(a)

                    # cv2.circle(img, (x, y), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    cooo = img[0][0]

    cooo = img[a_rr[0][1] + 3][a_rr[0][0] + 0]
    p_d = 0
    if 150 < cooo[0] < 190 and 180 < cooo[1] < 210 and 220 < cooo[2] < 240:
        p_d = 1
    if 100 < cooo[0] < 130 and 100 < cooo[1] < 130 and 140 < cooo[2] < 160:
        p_d = 2
    print("pd", p_d)






    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    A = int(img.shape[0])
    B = int(img.shape[1])
    arr = []
    Arr = []
    for y in range(A):
        for x in range(B):
            if x != 0:
                if img[y][x] != img[y][x - 1]:
                    a = (x, y)
                    arr.append(a)
    print(arr[0])
    img = img[arr[0][1]:img.shape[0]][0:img.shape[1]]
    print(img.shape)
    for y in range(int(img.shape[0])):
        for x in range(int(img.shape[1])):
            Arr.append(img[y][x])
    unq, count = np.unique(Arr, axis=0, return_counts=True)
    tql = []
    for i in range(20):
        for j in unq:
            if img[i + 1][arr[0][0]] == j:
                if count[unq == j] > 100:
                    print("j", j)
                    tql.append(j)
                    break

    maxlabel = max(tql, key=tql.count)
    print("maxlabel", maxlabel)
    img = cv2.cvtColor(img, cv2.COLOR_GRAY2BGR)
    for y in range(int(img.shape[0])):
        for x in range(int(img.shape[1])):
            a = np.array(img[y][x])
            if int(img[y][x][0]) != maxlabel:
                img[y][x][0] = 0
                img[y][x][1] = 0
                img[y][x][2] = 0
    img = cv2.medianBlur(img, 3)
    return img, p_d, a_rr[0][1]


def get_c(img, len):
    img_show = img.copy()
    img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    img = cv2.GaussianBlur(img, (3, 3), cv2.BORDER_DEFAULT)
    img = cv2.Canny(img, 50, 50)
    img = cv2.dilate(img, (10, 10), iterations=2)
    img = cv2.erode(img, (10, 10), iterations=2)
    contours1, hierarchy = cv2.findContours(image=img, mode=cv2.RETR_EXTERNAL, method=cv2.CHAIN_APPROX_SIMPLE)
    cv2.drawContours(image=img, contours=contours1, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    contours = []
    for obj in contours1:
        for i in obj:
            i = i.tolist()
            contours.append(i)
    contours = np.array(contours)
    contours = contours.squeeze()
    a = int(np.mean(contours, axis=0)[0])
    b = int(np.mean(contours, axis=0)[1])
    cv2.circle(img_show, (a, b), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
    cv2.imshow("img_show", img_show)

    hwnd = win32gui.FindWindow(None, "img_show")  # 获取句柄，然后置顶
    CVRECT = cv2.getWindowImageRect("img_show")
    win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, 610, 125, img_show.shape[1], img_show.shape[0] + 40,
                          win32con.SWP_SHOWWINDOW)
    c = [a, b + len]
    print(c)
    return c


def RemoveDir(filepath):
    '''
    如果文件夹不存在就创建，如果文件存在就清空！

    '''
    if not os.path.exists(filepath):
        os.mkdir(filepath)
    else:
        shutil.rmtree(filepath)
        os.mkdir(filepath)


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
        getimg, pd,len = get_tol(img)
        get_img = get_img1(getimg, -1)

        center1 = get_c(get_img,len)
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
        getimg, pd ,len= get_tol(img)
        get_img = get_img1(getimg, 1)
        center1 = get_c(get_img, len)
        center2 = [0 - 15, img.shape[0]]
        length = distance(center1, center2)
        time1 = get_time(length)
        dian_ji(time1)
        print("时间", time1)
        print("距离", length)
        print("change1", change1)

    cv2.waitKey(600)
    time.sleep(0.8)
