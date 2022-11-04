import cv2
import pyautogui
import time
import time
import numpy as np
import pyautogui
import cv2
import keyboard
# # while 1:
# #     keyboard.wait('s')
# #     time.sleep(0.5)
# #     pyautogui.keyDown('w')
# #     # 停留2秒，具体多长可自定义
# #     time.sleep(3)
# #     img = pyautogui.screenshot(region=None)  # x,y,w,hsw
# #     img = cv2.cvtColor(np.asarray(img), cv2.COLOR_RGB2BGR)
# #     cv2.imwrite('f:/333.png', img)
# #     img = cv2.imread("f:\\333.png")
# #     template = cv2.imread('f:\Test.png')
# #     res = cv2.matchTemplate(img, template, cv2.TM_CCOEFF_NORMED)
# #     min_val, max_val, min_loc, max_loc = cv2.minMaxLoc(res)
# #     print(min_val, max_val, min_loc, max_loc)
# #
# #     pyautogui.moveTo(max_loc[0]+16, max_loc[1]+143)
# #     pyautogui.keyUp('w')
# import time
#
# import numpy as np
# import pyautogui
# import cv2
#
#
# def pd(np_arr):
#     c_boom = 0
#     c_o = 0
#     for i in range(3):
#         for j in range(3):
#             if np_arr[i][j] == 8:
#                 c_boom = c_boom + 1
#             elif np_arr[i][j] == 0:
#                 c_o = c_o + 1
#     return c_boom, c_o
#
#     #
#
#
# #
# time.sleep(2)
# img = pyautogui.screenshot(region=[528, 278, 843, 450])
# # img = pyautogui.screenshot(region=[725, 278, 450, 450])  # x,y,w,h
# img.save('f:\\test\\screenshot.png')
# img = cv2.imread("f:\\test\\screenshot.png")
# img2 = img.copy()
# test = np.zeros((18, 32), dtype=np.int64)
# for i in range(32):
#     test[0][i] = 9
#     test[17][i] = 9
# for i in range(18):
#     test[i][0] = 9
#     test[i][31] = 9
# for i in range(15, 843, 28):
#     for j in range(15, 450, 28):
#         if 260 > int(img[j][i][0]) > 220 and int(img[j][i][1]) < 100 and int(img[j][i][2]) < 100:
#             x = int((i + 13) / 28)
#             y = int((j + 13) / 28)
#             test[y][x] = 1
#         elif 110 < img[j][i][1] < 160 and int(img[j][i][0]) < 100 and int(img[j][i][2]) < 100:
#             x = int((i + 13) / 28)
#             y = int((j + 13) / 28)
#             test[y][x] = 2
#         elif 260 > int(img[j][i][2]) > 220 and int(img[j][i][0]) < 100 and int(img[j][i][1]) < 100:
#             x = int((i + 13) / 28)
#             y = int((j + 13) / 28)
#             test[y][x] = 3
#         elif 110 < img[j][i][0] < 160 and int(img[j][i][1]) < 100 and int(img[j][i][2]) < 100:
#             x = int((i + 13) / 28)
#             y = int((j + 13) / 28)
#
#             test[y][x] = 4
#         elif 110 < img[j][i][2] < 160 and int(img[j][i][0]) < 100 and int(img[j][i][1]) < 100:
#             x = int((i + 13) / 28)
#             y = int((j + 13) / 28)
#
#             test[y][x] = 5
#         else:
#             if (img[j][i - 8] == np.array([190, 190, 190])).all():
#                 x = int((i + 13) / 28)
#                 y = int((j + 13) / 28)
#                 test[y][x] = 9
#                 cv2.circle(img2, (i, j), 1, (255, 0, 255), thickness=1, lineType=cv2.LINE_AA)
#         # cv2.circle(img, (j , i ), 1, (0, 0, 255), thickness=1, lineType=cv2.LINE_AA)
# for k in range(5):
#     for i in range(1, 17):
#         for j in range(1, 17):
#             if test[i][j] != 0 and test[i][j] != 9:
#
#                 arr = np.array([[test[i - 1][j - 1], test[i - 1][j], test[i - 1][j + 1]]
#                                    , [test[i][j - 1], test[i][j], test[i][j + 1]]
#                                    , [test[i + 1][j - 1], test[i + 1][j], test[i + 1][j + 1]]])
#                 c_boom, c_o = pd(arr)
#                 if test[i][j] - c_boom == c_o:
#                     for i1 in range(i - 1, i + 2):
#                         for j1 in range(j - 1, j + 2):
#                             if test[i1][j1] == 0:
#                                 cv2.circle(img2, ((j1 - 1) * 28 + 15, (i1 - 1) * 28 + 15), 1, (0, 0, 255),
#                                            thickness=1,
#                                            lineType=cv2.LINE_AA)
#
#                                 test[i1][j1] = 8
#                 elif test[i][j] - c_boom == 0:
#                     count = 0
#                     for i1 in range(i - 1, i + 2):
#                         for j1 in range(j - 1, j + 2):
#                             if test[i1][j1] == 0:
#                                 a = (j1 - 1) * 28 + 15
#                                 b = (i1 - 1) * 28 + 15
#                                 cv2.circle(img2, (a, b), 1, (255, 255, 255),
#                                            thickness=1,
#                                            lineType=cv2.LINE_AA)
#                                 test[i1][j1] = 7
#                                 pyautogui.moveTo(738 + (a - 15), 291 + b - 15)
#                                 pyautogui.click()
#                     if count == 0:
#                         print("conut==0")
# print(test)
# cv2.imshow("asd", img2)
# cv2.waitKey(0)s
while 1:

    pyautogui . click()
