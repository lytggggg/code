# import mss
#
# import numpy as np
# import cv2
# import win32api
# import win32con
# import win32gui
# import win32ui
#
#
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
# while True:
#     img = sct.grab(monitor=monitor)
#     img = np.array(img)
#     cv2.namedWindow(window_name, cv2.WINDOW_NORMAL)  # cv2.WINDOW_NORMAL 根据窗口大小设置我们的图片大小
#     cv2.resizeWindow(window_name, RESIZE_WIN_WIDTH, RESIZE_WIN_HEIGHT)
#     cv2.imshow(window_name, img)
#     k = cv2.waitKey(1)
#     if k % 256 == 27:  # ESC
#         cv2.destroyAllWindows()
#         exit('ESC ...')
import time

import win32api
import win32con


def MP(x, y):
    try:
        x = int(x)
        y = int(y)
        win32api.mouse_event(win32con.MOUSEEVENTF_MOVE, x, y)
    except:
        print('Move Error')


time.sleep(5)
MP(50,100)