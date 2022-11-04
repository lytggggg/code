import math
from PIL import ImageGrab
from pynput.mouse import Button, Controller
import time
import cv2
import numpy as np

pt1 = (0, 0)
pt2 = (291, 0)
pt3 = (291, 428)
pt4 = (140, 516)
pt5 = (0, 516)


def get_center(img_rgb, template):
    res = cv2.matchTemplate(img_rgb, template, cv2.TM_CCOEFF_NORMED)
    min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
    h, w = template.shape[:2]
    top_left = max_loc
    center_loc = ((int)(max_loc[0] + w / 2), int(max_loc[1] + h / 2) + 36)
    a = cv2.circle(img_rgb, center_loc, 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)

    return max_loc, h, w, center_loc


def math_point(p, center_loc, k):
    # y=-0.58*x+a*0.58+b
    y1 = k * center_loc[0] + p[0] * (-k) + p[1]
    y1 = int(y1)
    x2 = (p[0] * (-k) + p[1] - center_loc[1]) / (-k)
    x2 = int(x2)

    p1 = (center_loc[0], y1)
    p2 = (x2, center_loc[1])
    return p1, p2


def get_img1(img, max_loc, center_loc, k):
    pt_1 = ()
    pt_2 = ()
    pt_3 = ()
    pt_4 = ()
    pt_5 = ()
    if k < 0:
        pt_1 = (0, 0)
        pt_2 = (center_loc[0], 0)
        pt_3, pt_4 = math_point(max_loc, center_loc, k)
        pt_5 = (0, center_loc[1])
    else:
        pt_1 = (0, 0)
        pt_2 = (img.shape[1], 0)
        pt_3 = (img.shape[1], img.shape[0])
        p = (max_loc[0] + 40, max_loc[1])
        pt_5, pt_4 = math_point(p, center_loc, k)

    blank = np.zeros(img.shape[:2], dtype='uint8')
    cv2.circle(blank, pt_1, 1, (255, 255, 255), -1)
    cv2.circle(blank, pt_2, 1, (255, 255, 255), -1)
    cv2.circle(blank, pt_3, 1, (255, 255, 255), -1)
    cv2.circle(blank, pt_4, 1, (255, 255, 255), -1)
    cv2.circle(blank, pt_5, 1, (255, 255, 255), -1)
    triangle_cnt = np.array([pt_1, pt_2, pt_3, pt_4, pt_5])

    mask = cv2.drawContours(blank, [triangle_cnt], 0, (255, 255, 255), -1)
    m = cv2.bitwise_and(img, img, mask=mask)
    return m


lowThreshold = 0
max_lowThreshold = 255
ratio = 3
kernel_size = 3


def find_left(masked, gray):
    # detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(masked, 30, 30 * ratio, apertureSize=kernel_size)
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
    print(center)
    cv2.circle(lap, (center[0], center[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (a[0], a[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (c[0], c[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.circle(lap, (d[0], d[1]), 1, (0, 0, 255), thickness=3, lineType=cv2.LINE_AA)
    cv2.drawContours(image=lap, contours=contours, contourIdx=-1, color=(255, 0, 0), thickness=1,
                     lineType=cv2.LINE_AA)
    cv2.imshow('canny demo', lap)
    return center


def find_right(masked, gray):
    # detected_edges = cv2.GaussianBlur(gray, (3, 3), 0)
    detected_edges = cv2.Canny(masked, 45, 40 * ratio, apertureSize=kernel_size)
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
    #把你的跳一跳放在左上角位置，对齐。
    ss_region = (1, 2, 450, 855)  # 距离左上右下的像素
    ss_img = ImageGrab.grab(ss_region)
    #f盘自己创建一个img文件夹，可以换其他盘
    p = "F:\\img\\"
    a = a + 1
    path = p + "PILImage" + str(a) + ".jpg"

    ss_img.save(path)
    img = cv2.imread(path)

    img_rgb = img.copy()
    template = cv2.imread('F:\Snipaste_2022-07-21_03-20-01.png')#这是棋子的图片
    max_loc, h, w, center_loc = get_center(img, template)

    img = cv2.resize(img, (450, 855), interpolation=cv2.INTER_CUBIC)#这个（450，855）是跳一跳图片的大小，把截图按住就可以显示大小

    center = ()
    length = 0
    # 左
    if center_loc[0] > img.shape[1] / 2:
        masked = get_img1(img, max_loc, center_loc, -1)
        masked = masked[200:center_loc[1], 0:center_loc[0] - 15]
        gray = cv2.cvtColor(masked, cv2.COLOR_BGR2GRAY)
        masked = cv2.GaussianBlur(masked, (3, 3), 0)
        center = find_left(masked, gray)
        length = distance((masked.shape[1] + 15, masked.shape[0]), center)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        dian_ji(time1)
    else:
        masked = get_img1(img, max_loc, center_loc, 1)
        masked = masked[200:center_loc[1], center_loc[0] + 15:img.shape[1]]
        gray = cv2.cvtColor(masked, cv2.COLOR_BGR2GRAY)
        masked = cv2.GaussianBlur(masked, (3, 3), 0)
        center = find_right(masked, gray)
        length = distance((0 - 15, masked.shape[0]), center)
        time1 = get_time(length)
        print("时间", time1)
        print("距离", length)
        dian_ji(time1)

    cv2.imshow("mask", masked)
    cv2.waitKey(500)
    time.sleep(1)
