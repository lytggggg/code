# #
# import threading
#
# import cv2
# import mss
# import numpy as np
# import keyboard
# import pyautogui
# import pyscreenshot
# from threading import Thread
#
# #
# import win32api
# import win32con
# import win32gui, win32ui, win32con, win32api
# def grab_screen(region=None):
#     hwin = win32gui.GetDesktopWindow()
#
#     if region:
#         left, top, width, height = region
#     else:
#         width = win32api.GetSystemMetrics(win32con.SM_CXVIRTUALSCREEN)
#         height = win32api.GetSystemMetrics(win32con.SM_CYVIRTUALSCREEN)
#         left = win32api.GetSystemMetrics(win32con.SM_XVIRTUALSCREEN)
#         top = win32api.GetSystemMetrics(win32con.SM_YVIRTUALSCREEN)
#
#     hwindc = win32gui.GetWindowDC(hwin)
#     srcdc = win32ui.CreateDCFromHandle(hwindc)
#     memdc = srcdc.CreateCompatibleDC()
#     bmp = win32ui.CreateBitmap()
#     bmp.CreateCompatibleBitmap(srcdc, width, height)
#     memdc.SelectObject(bmp)
#     memdc.BitBlt((0, 0), (width, height), srcdc, (left, top), win32con.SRCCOPY)
#
#     signedIntsArray = bmp.GetBitmapBits(True)
#     img = np.fromstring(signedIntsArray, dtype='uint8')
#     img.shape = (height, width, 4)
#
#     srcdc.DeleteDC()
#     memdc.DeleteDC()
#     win32gui.ReleaseDC(hwin, hwindc)
#     win32gui.DeleteObject(bmp.GetHandle())
#
#     return cv2.cvtColor(img, cv2.COLOR_BGRA2BGR)
#
#
# def window_capture(filename):
#     hwnd = 0  # 窗口的编号，0号表示当前活跃窗口
#     # 根据窗口句柄获取窗口的设备上下文DC（Divice Context）
#     hwndDC = win32gui.GetWindowDC(hwnd)
#     # 根据窗口的DC获取mfcDC
#     mfcDC = win32ui.CreateDCFromHandle(hwndDC)
#     # mfcDC创建可兼容的DC
#     saveDC = mfcDC.CreateCompatibleDC()
#     # 创建bigmap准备保存图片
#     saveBitMap = win32ui.CreateBitmap()
#     # 获取监控器信息
#     MoniterDev = win32api.EnumDisplayMonitors(None, None)
#     w = MoniterDev[0][2][2]
#     h = MoniterDev[0][2][3]
#     # print w,h　　　#图片大小
#     # 为bitmap开辟空间
#     saveBitMap.CreateCompatibleBitmap(mfcDC, 1919, 1079)
#     # 高度saveDC，将截图保存到saveBitmap中
#     saveDC.SelectObject(saveBitMap)
#     # 截取从左上角（0，0）长宽为（w，h）的图片
#     saveDC.BitBlt((0, 0), (1919, 1079), mfcDC, (0, 0), win32con.SRCCOPY)
#     saveBitMap.SaveBitmapFile(saveDC, filename)
#
#
# def MP(x, y):
#     try:
#         x = int(x)
#         y = int(y)
#         win32api.mouse_event(win32con.MOUSEEVENTF_MOVE, x, y)
#     except:
#         print('Move Error')
#
#
# def ShapeDetection(Img):
#     kernel_2 = np.ones((2, 2), np.uint8)  # 2x2的卷积核
#     kernel_3 = np.ones((3, 3), np.uint8)  # 3x3的卷积核
#     kernel_4 = np.ones((4, 4), np.uint8)  # 4x4的卷积核
#     HSV = cv2.cvtColor(Img, cv2.COLOR_BGR2HSV)  # 把BGR图像转换为HSV格式
#
#     Lower = np.array([78, 43, 46])  # 要识别颜色的下限
#     Upper = np.array([99, 255, 255])  # 要识别的颜色的上限
#     mask = cv2.inRange(HSV, Lower, Upper)
#
#     erosion = cv2.erode(mask, kernel_3, iterations=1)
#     erosion = cv2.erode(erosion, kernel_3, iterations=1)
#
#     dilation = cv2.dilate(erosion, kernel_3, iterations=1)
#     dilation = cv2.dilate(dilation, kernel_3, iterations=1)
#
#     #
#     target = cv2.bitwise_and(Img, Img, mask=dilation)
#
#     ret, binary = cv2.threshold(dilation, 127, 255, cv2.THRESH_BINARY)
#
#     contours, hierarchy = cv2.findContours(binary, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
#
#     arr = []
#     for obj in contours:
#         area = cv2.contourArea(obj)
#         if area > 0:
#             cv2.drawContours(imgContour, obj, -1, (255, 0, 0), 4)
#             perimeter = cv2.arcLength(obj, True)
#             approx = cv2.approxPolyDP(obj, 0.02 * perimeter, True)
#             CornerNum = len(approx)
#             x, y, w, h = cv2.boundingRect(approx)
#
#             if CornerNum > 4:
#                 objType = "c"
#                 cv2.circle(imgContour, (int(x + w / 2), int(y + h / 2)), 2, (0, 0, 0), thickness=5,
#                            lineType=cv2.LINE_AA)
#                 d = [int(x + w / 2), int(y + h / 2)]
#                 arr.append(d)
#                 # position = pyautogui.position()
#                 # cen = [d[0] - position[0], d[1] - position[1]]
#                 # MP(cen[0], cen[1])
#                 # pyautogui.press('g')
#                 #
#                 # print(d,position)
#
#
#             else:
#                 objType = "N"
#
#             cv2.rectangle(imgContour, (x, y), (x + w, y + h), (0, 0, 255), 2)
#             # cv2.putText(imgContour, objType, (x + (w // 2), y + (h // 2)), cv2.FONT_HERSHEY_COMPLEX, 0.6, (0, 0, 0),
#             #             1)
#
#     if len(arr) == 3:
#
#         position = pyautogui.position()
#         cen = [arr[0][0] - position[0], arr[0][1] - position[1]]
#         MP(cen[0], cen[1])
#         pyautogui.press('g')
#
#         arr[1][0] = arr[1][0] - cen[0]
#         arr[1][1] = arr[1][1] - cen[1]
#         arr[2][0] = arr[2][0] - cen[0]
#         arr[2][1] = arr[2][1] - cen[1]
#         position1 = pyautogui.position()
#         cen1 = [arr[1][0] - position1[0], arr[1][1] - position1[1]]
#         MP(cen1[0], cen1[1])
#         pyautogui.press('g')
#
#         arr[2][0] = arr[2][0] - cen1[0]
#         arr[2][1] = arr[2][1] - cen1[1]
#
#         position2 = pyautogui.position()
#         cen2 = [arr[2][0] - position2[0], arr[2][1] - position2[1]]
#         MP(cen2[0], cen2[1])
#         pyautogui.press('g')
#         MP(-cen2[0], -cen2[1])
#         MP(-cen1[0], -cen1[1])
#         MP(-cen[0], -cen[1])
#         print(d, position)
#
#     elif len(arr) == 2:
#         # t1 = Thread(target=window_capture, args=('f:\\pythonthree.png',))
#         # t1.start()
#         position = pyautogui.position()
#         cen = [arr[0][0] - position[0], arr[0][1] - position[1]]
#         MP(cen[0], cen[1])
#         pyautogui.press('g')
#         arr[1][0] = arr[1][0] - cen[0]
#         arr[1][1] = arr[1][1] - cen[1]
#
#         position1 = pyautogui.position()
#         cen1 = [arr[1][0] - position1[0], arr[1][1] - position1[1]]
#         MP(cen1[0], cen1[1])
#         pyautogui.press('g')
#
#         MP(-cen1[0], -cen1[1])
#         MP(-cen[0], -cen[1])
#         print(d, position)
#
#
# keyboard.wait('s')
# sct = mss.mss()
# screen_width = 1920  # 屏幕的宽
# screen_height = 1080  # 屏幕的高
# GAME_LEFT, GAME_TOP, GAME_WIDTH, GAME_HEIGHT = screen_width // 3, screen_height // 3, screen_width // 3, screen_height // 3  # 游戏内截图区域
# RESIZE_WIN_WIDTH, RESIZE_WIN_HEIGHT = screen_width // 5, screen_height // 5  # 显示窗口大小
# monitor = {
#     'left': 0,
#     'top': 0,
#     'width': screen_width,
#     'height': screen_height
# }
# window_name = 'test'
# while 1:
#     # window_capture("f:\\pythonthree.png")
#     #
#     # path = 'f:\\pythonthree.png'
#     # img = cv2.imread(path)
#     img = sct.grab(monitor=monitor)
#     img = np.array(img)
#     imgContour = img.copy()
#
#     imgGray = cv2.cvtColor(img, cv2.COLOR_RGB2GRAY)
#     imgBlur = cv2.GaussianBlur(imgGray, (5, 5), 1)
#     imgCanny = cv2.Canny(imgBlur, 60, 60)
#     ShapeDetection(img)
import cv2
import numpy as np


def ShapeDetection(Img):
    HSV = cv2.cvtColor(Img, cv2.COLOR_BGR2HSV)  # 把BGR图像转换为HSV格式

    Lower = np.array([118, 0, 0])  # 要识别颜色的下限
    Upper = np.array([160, 255, 150])  # 要识别的颜色的上限
    mask = cv2.inRange(HSV, Lower, Upper)

    # erosion = cv2.erode(mask, kernel_3, iterations=1)
    # erosion = cv2.erode(erosion, kernel_3, iterations=1)
    #
    # dilation = cv2.dilate(erosion, kernel_3, iterations=1)
    # dilation = cv2.dilate(dilation, kernel_3, iterations=1)
    #
    # #
    # target = cv2.bitwise_and(Img, Img, mask=dilation)

    #  ret, binary = cv2.threshold(dilation, 127, 255, cv2.THRESH_BINARY)
    return mask


cv2.namedWindow("new",0)
img = cv2.imread("f:\\q.png")
binary = ShapeDetection(img)
cv2.imshow("new", binary)
cv2.waitKey(0)
