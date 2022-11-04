import sys

import cv2
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
import two
import four
import three
import six
import seven


class QpixmapDemo(QWidget):
    def __init__(self, parent=None):
        super(QpixmapDemo, self).__init__(parent)
        self.initUI()

    def initUI(self):
        self.setWindowTitle('图像处理')  # 设置窗口名称
        self.setGeometry(500, 300, 800, 700)  # 设置窗口大小

        self.Button01 = QPushButton(self)
        self.Button01.setText("灰度图")
        self.Button01.move(10, 10)  # 设置按钮位置
        self.Button01.clicked.connect(self.gray)  # 按钮连接函数

        self.Button0 = QPushButton(self)
        self.Button0.setText("二值图")
        self.Button0.move(10, 40)  # 设置按钮位置
        self.Button0.clicked.connect(self.binary_img)  # 按钮连接函数

        self.Button = QPushButton(self)
        self.Button.setText("原图")
        self.Button.move(10, 70)  # 设置按钮位置
        self.Button.clicked.connect(self.openimage)  # 按钮连接函数

        self.Button2 = QPushButton(self)
        self.Button2.setText("伪彩色1")
        self.Button2.move(10, 100)  # 设置按钮位置
        self.Button2.clicked.connect(self.weisecai1)  # 按钮连接函数

        self.Button3 = QPushButton(self)
        self.Button3.setText("伪彩色2")
        self.Button3.move(10, 130)  # 设置按钮位置
        self.Button3.clicked.connect(self.weisecai2)  # 按钮连接函数

        self.Button4 = QPushButton(self)
        self.Button4.setText("伪彩色3")
        self.Button4.move(10, 160)  # 设置按钮位置
        self.Button4.clicked.connect(self.weisecai3)  # 按钮连接函数

        self.Button5 = QPushButton(self)
        self.Button5.setText("水平垂直差分锐化")
        self.Button5.move(10, 190)  # 设置按钮位置
        self.Button5.clicked.connect(self.showdiff)  # 按钮连接函数

        self.Button6 = QPushButton(self)
        self.Button6.setText("sobel算子锐化")
        self.Button6.move(10, 220)  # 设置按钮位置
        self.Button6.clicked.connect(self.showdiff2)  # 按钮连接函数

        self.Button7 = QPushButton(self)
        self.Button7.setText("robert算子锐化")
        self.Button7.move(10, 220 + 30)  # 设置按钮位置
        self.Button7.clicked.connect(self.robert)  # 按钮连接函数

        self.Button8 = QPushButton(self)
        self.Button8.setText("prewitt算子锐化")
        self.Button8.move(10, 220 + 30 + 30)  # 设置按钮位置
        self.Button8.clicked.connect(self.prewitt)  # 按钮连接函数

        self.Button9 = QPushButton(self)
        self.Button9.setText("拉普拉斯算子锐化")
        self.Button9.move(10, 220 + 30 + 30 + 30)  # 设置按钮位置
        self.Button9.clicked.connect(self.laplacian)  # 按钮连接函数

        self.Button10 = QPushButton(self)
        self.Button10.setText("robinson算子锐化")
        self.Button10.move(10, 220 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button10.clicked.connect(self.robinson)  # 按钮连接函数

        self.Button11 = QPushButton(self)
        self.Button11.setText("kirch算子锐化")
        self.Button11.move(10, 220 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button11.clicked.connect(self.kirch)  # 按钮连接函数

        self.Button12 = QPushButton(self)
        self.Button12.setText("add随机噪声")
        self.Button12.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button12.clicked.connect(self.addzaosheng1)  # 按钮连接函数

        self.Button13 = QPushButton(self)
        self.Button13.setText("add黑白噪声")
        self.Button13.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button13.clicked.connect(self.addzaosheng2)  # 按钮连接函数

        self.Button14 = QPushButton(self)
        self.Button14.setText("中值滤波")
        self.Button14.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button14.clicked.connect(self.zhongzhilvbo)  # 按钮连接函数

        self.Button15 = QPushButton(self)
        self.Button15.setText("均值滤波")
        self.Button15.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button15.clicked.connect(self.junzhilvbo)  # 按钮连接函数

        self.Button16 = QPushButton(self)
        self.Button16.setText("图像旋转")
        self.Button16.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button16.clicked.connect(self.xunzhuan)  # 按钮连接函数

        self.Button17 = QPushButton(self)
        self.Button17.setText("八邻域平均滤波")
        self.Button17.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button17.clicked.connect(self.eight_neighborhood_average)  # 按钮连接函数

        self.Button18 = QPushButton(self)
        self.Button18.setText("修正平均滤波")
        self.Button18.move(10, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button18.clicked.connect(self.xiuzheng)  # 按钮连接函数

        self.Button19 = QPushButton(self)
        self.Button19.setText("二值图像膨胀")
        self.Button19.move(140, 220 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button19.clicked.connect(self.dilate)  # 按钮连接函数

        self.Button20 = QPushButton(self)
        self.Button20.setText("二值图像腐蚀")
        self.Button20.move(140, 220 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button20.clicked.connect(self.BinaryErosion)  # 按钮连接函数

        self.Button21 = QPushButton(self)
        self.Button21.setText("二值图像开运算")
        self.Button21.move(140, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button21.clicked.connect(self.kaiyunsuan)  # 按钮连接函数

        self.Button22 = QPushButton(self)
        self.Button22.setText("二值图像闭运算")
        self.Button22.move(140, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button22.clicked.connect(self.biyunsuan)  # 按钮连接函数

        self.Button23 = QPushButton(self)
        self.Button23.setText("灰度图像膨胀")
        self.Button23.move(140 + 100 + 20, 220 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button23.clicked.connect(self.gray_dilate)  # 按钮连接函数

        self.Button24 = QPushButton(self)
        self.Button24.setText("灰度图像腐蚀")
        self.Button24.move(140 + 100 + 20, 220 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button24.clicked.connect(self.gray_erode)  # 按钮连接函数

        self.Button25 = QPushButton(self)
        self.Button25.setText("灰度图像开运算")
        self.Button25.move(140 + 100 + 20, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button25.clicked.connect(self.gray_kaiyunsuan)  # 按钮连接函数

        self.Button26 = QPushButton(self)
        self.Button26.setText("灰度图像闭运算")
        self.Button26.move(140 + 100 + 20, 220 + 30 + 30 + 30 + 30 + 30 + 30 + 30 + 30)  # 设置按钮位置
        self.Button26.clicked.connect(self.gray_biyunsuan)  # 按钮连接函数

        self.lab1 = QLabel(self)  # 设置图片显示label
        self.lab1.setFixedSize(300, 300)  # 设置图片大小
        self.lab1.move(150, 50)  # 设置图片位置
        self.lab1.setStyleSheet("QLabel{background:white;}")  # 设置label底色

        self.lab2 = QLabel(self)  # 设置图片显示label
        self.lab2.setFixedSize(300, 300)  # 设置图片大小
        self.lab2.move(460, 50)  # 设置图片位置
        self.lab2.setStyleSheet("QLabel{background:white;}")  # 设置label底色

    def gray_kaiyunsuan(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        img2 = seven.gray_kaiyunsuan(img)
        self.showImage = QPixmap("gray_kaiyunsuan.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def gray_biyunsuan(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        img2 = seven.gray_biyunsuan(img)
        self.showImage = QPixmap("gray_biyunsuan.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def gray(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        cv2.imwrite('gray.png', img2)
        self.showImage = QPixmap("gray.png").scaled(self.lab1.width(), self.lab1.height())  # 适应窗口大小
        self.lab1.setPixmap(self.showImage)  # 显示图片

    def gray_dilate(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        img2 = seven.gray_dilate(img2)
        self.showImage = QPixmap("gray_dilate.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def gray_erode(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        img2 = seven.gray_erode(img2)
        self.showImage = QPixmap("gray_erode.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def kaiyunsuan(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = seven.binary_img(img)
        img2 = seven.kaiyunsuan(img)
        self.showImage = QPixmap("kaiyunsuan.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def biyunsuan(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = seven.binary_img(img)
        img2 = seven.biyunsuan(img)
        self.showImage = QPixmap("biyunsuan.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def BinaryErosion(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = seven.binary_img(img)
        img2 = seven.BinaryErosion(img)
        self.showImage = QPixmap("BinaryErosion.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def binary_img(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = seven.binary_img(img)

        self.showImage = QPixmap("binary_img.jpg").scaled(self.lab1.width(), self.lab1.height())  # 适应窗口大小
        self.lab1.setPixmap(self.showImage)  # 显示图片

    def dilate(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img = seven.binary_img(img)
        img2 = seven.BinaryDilation(img)
        self.showImage = QPixmap("BinaryDilation.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def xiuzheng(self):
        img_path = 'salt_pepper.jpg'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.xiuzheng(img)
        self.showImage = QPixmap("xiuzheng.jpg").scaled(self.lab2.width(),
                                                        self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def eight_neighborhood_average(self):
        img_path = 'salt_pepper.jpg'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.eight_neighborhood_average(img)
        self.showImage = QPixmap("eight_neighborhood_average.jpg").scaled(self.lab2.width(),
                                                                          self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def robert(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = four.roberts(img)
        self.showImage = QPixmap("roberts.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def prewitt(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = four.prewitt(img)
        self.showImage = QPixmap("prewitt.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def laplacian(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = four.laplace(img)
        self.showImage = QPixmap("laplace.jpg").scaled(self.lab2.width(), self.lab2.height())
        self.lab2.setPixmap(self.showImage)

    def robinson(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = four.robinson(img)
        self.showImage = QPixmap("robinson.jpg").scaled(self.lab2.width(), self.lab2.height())
        self.lab2.setPixmap(self.showImage)

    def kirch(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = four.kirsh(img)
        self.showImage = QPixmap("kirsh.jpg").scaled(self.lab2.width(), self.lab2.height())
        self.lab2.setPixmap(self.showImage)

    def openimage(self):  # 显示图片函数
        self.lab0 = QLabel(self)  # 设置图片显示label
        self.lab0.setText("   显示图片")
        self.lab0.setGeometry(10, 10, 20, 20)

        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = four.diff(img)
        self.showImage = QPixmap(img_path).scaled(self.lab1.width(), self.lab1.height())  # 适应窗口大小
        self.lab1.setPixmap(self.showImage)  # 显示图片

    def showdiff(self):  # 显示图片函数
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = four.diff(img)
        self.showImage = QPixmap("diff.jpg").scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def weisecai1(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = three.wei_color1(img)
        self.showImage = QPixmap('wei_color1.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def weisecai2(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = three.wei_color2(img)
        self.showImage = QPixmap('wei_color2.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def weisecai3(self):
        img_path = 'f:\\qq.png'
        img = cv2.imread(img_path)
        img2 = three.wei_color3(img)
        self.showImage = QPixmap('wei_color3.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def showdiff2(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = four.sobel(img)
        self.showImage = QPixmap('sobel.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)  # 显示图片

    def addzaosheng1(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.random_noise(img)
        self.showImage = QPixmap('random_noise.jpg').scaled(self.lab1.width(), self.lab1.height())  # 适应窗口大小
        self.lab1.setPixmap(self.showImage)  # 显示图片

    def addzaosheng2(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.addsalt_pepper(img)
        self.showImage = QPixmap('salt_pepper.jpg').scaled(self.lab1.width(), self.lab1.height())  # 适应窗口大小
        self.lab1.setPixmap(self.showImage)

    def zhongzhilvbo(self):
        img_path = 'salt_pepper.jpg'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.median_filter(img)
        self.showImage = QPixmap('median_filter.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)

    def junzhilvbo(self):
        img_path = 'salt_pepper.jpg'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = two.mean_filter(img)
        self.showImage = QPixmap('mean_filter.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)

    def xunzhuan(self):
        img_path = 'f:\\qq.png'  # 设置图片路径
        img = cv2.imread(img_path)
        img2 = six.xuanzhuan(img)
        self.showImage = QPixmap('new_img.jpg').scaled(self.lab2.width(), self.lab2.height())  # 适应窗口大小
        self.lab2.setPixmap(self.showImage)


if __name__ == '__main__':
    app = QApplication(sys.argv)
    demo = QpixmapDemo()
    demo.show()
    sys.exit(app.exec_())
