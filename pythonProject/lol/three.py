import shutil
import time
import keyboard

import cv2
import numpy as np
import pyautogui
import os

import pyscreenshot


def pd(np_arr):
    c_boom = 0
    c_o = 0
    for i in range(3):
        for j in range(3):
            if np_arr[i][j] == 8:
                c_boom = c_boom + 1
            elif np_arr[i][j] == 0:
                c_o = c_o + 1
    return c_boom, c_o


def pd_top_down6(np_arr):
    c_boom = 0
    c_o = 0
    for i in range(2):
        for j in range(3):
            if np_arr[i][j] == 8:
                c_boom = c_boom + 1
            elif np_arr[i][j] == 0:
                c_o = c_o + 1
    return c_boom, c_o


def RemoveDir(filepath):
    '''
    如果文件夹不存在就创建，如果文件存在就清空！

    '''
    if not os.path.exists(filepath):
        os.mkdir(filepath)
    else:
        shutil.rmtree(filepath)
        os.mkdir(filepath)


def pd_l_r6(np_arr):
    c_boom = 0
    c_o = 0
    for i in range(3):
        for j in range(2):
            if np_arr[i][j] == 8:
                c_boom = c_boom + 1
            elif np_arr[i][j] == 0:
                c_o = c_o + 1
    return c_boom, c_o


aaa = -1
p = "F:\\img\\"
RemoveDir(p)
image = pyscreenshot.grab(bbox=(1, 2, 450, 855))
image.save("f:\\img\\Snipaste_2022.png")
while True:
    pyautogui.press('F1')
    pyautogui.hotkey('Ctrl', 'Shift', 's')
    aaa = aaa + 1
    path = p + "Snipaste_2022_" + str(aaa) + ".png"
    print(path)
    img = cv2.imread(path)
    # img = img[186:img.shape[0] - 254, 199:img.shape[1] - 521]
    # test = np.zeros((16, 16), dtype=np.int64)
    # cv2.circle(img, (35, 16+33+33+33), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
    # print(img[1.5][1])
    # print(img.shape)
    img = img[69:img.shape[0] - 9, 15:img.shape[1] - 10]
    img2 = img.copy()

    print(img.shape)
    a = 0
    test = np.zeros((18, 18), dtype=np.int64)
    for i in range(18):
        test[0][i] = 9
        test[17][i] = 9
        test[i][0] = 9
        test[i][17] = 9
    for i in range(10, 320, 20):
        for j in range(10, 320, 20):
            if 260 > int(img[j][i][0]) > 220 and int(img[j][i][1]) < 100 and int(img[j][i][2]) < 100:
                x = int((i + 10) / 20)
                y = int((j + 10) / 20)
                test[y][x] = 1
            elif 110 < img[j][i][1] < 160 and int(img[j][i][0]) < 100 and int(img[j][i][2]) < 100:
                x = int((i + 10) / 20)
                y = int((j + 10) / 20)
                test[y][x] = 2
            elif 260 > int(img[j][i][2]) > 220 and int(img[j][i][0]) < 100 and int(img[j][i][1]) < 100:
                x = int((i + 10) / 20)
                y = int((j + 10) / 20)
                test[y][x] = 3
            elif 110 < img[j][i][0] < 160 and int(img[j][i][1]) < 100 and int(img[j][i][2]) < 100:
                x = int((i + 10) / 20)
                y = int((j + 10) / 20)

                test[y][x] = 4
            elif 110 < img[j][i][2] < 160 and int(img[j][i][0]) < 100 and int(img[j][i][1]) < 100:
                x = int((i + 10) / 20)
                y = int((j + 10) / 20)

                test[y][x] = 5
            else:
                if (img[j][i - 8] == np.array([192, 192, 192])).all():
                    x = int((i + 10) / 20)
                    y = int((j + 10) / 20)
                    test[y][x] = 9
                    print(i, j)
                    cv2.circle(img2, (i, j), 1, (255, 0, 255), thickness=1, lineType=cv2.LINE_AA)

            # if (img[j][i]!=np.array([192,192,192])).all():
            #     x=int((i+10)/20)-1
            #     y=int((j+10)/20)-1
            #     print(x,y)
            #     test[y][x]=1

            # cv2.circle(img, (i, j), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
    print(test)
    for k in range(5):
        for i in range(1, 17):
            for j in range(1, 17):
                if test[i][j] != 0 and test[i][j] != 9:

                    arr = np.array([[test[i - 1][j - 1], test[i - 1][j], test[i - 1][j + 1]]
                                       , [test[i][j - 1], test[i][j], test[i][j + 1]]
                                       , [test[i + 1][j - 1], test[i + 1][j], test[i + 1][j + 1]]])
                    c_boom, c_o = pd(arr)
                    if test[i][j] - c_boom == c_o:
                        for i1 in range(i - 1, i + 2):
                            for j1 in range(j - 1, j + 2):
                                if test[i1][j1] == 0:
                                    cv2.circle(img2, ((j1) * 20 - 10, (i1) * 20 - 10), 1, (0, 0, 255),
                                               thickness=1,
                                               lineType=cv2.LINE_AA)

                                    test[i1][j1] = 8
                    elif test[i][j] - c_boom == 0:
                        for i1 in range(i - 1, i + 2):
                            for j1 in range(j - 1, j + 2):
                                if test[i1][j1] == 0:
                                    a = (j1) * 20 - 10
                                    b = (i1) * 20 - 10
                                    cv2.circle(img2, (a, b), 1, (255, 255, 255),
                                               thickness=1,
                                               lineType=cv2.LINE_AA)
                                    test[i1][j1] = 7
                                    pyautogui.moveTo(1065 + (a - 10), 276 + b - 10)
                                    pyautogui.click()



cv2.imshow("sad", img2)

