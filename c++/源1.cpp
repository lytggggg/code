////
////#include<iostream>
////#include"Serial.h"
////#include <TCHAR.h>
////#include <stdlib.h>
////#include <stdio.h>
////#include <sstream>
////#include<opencv2\opencv.hpp>
////using namespace cv;
////using namespace std;
////CSerial serial;
////void  serialInit() {
////	serial.OpenSerialPort(_T("COM3:"), 9600, 8, 1);
////}
////void Send(char x) {
////	serial.SendData(&x, 1);
////}
////int main(int argc, char** argv) {
////	serialInit();
////	VideoCapture cap(0);
////	Mat src;
////	Mat grayImage;
////	Mat binImage;
////	Mat element = getStructuringElement(MORPH_RECT, Size(2, 2));
////	vector<vector<Point>>contours;
////	vector<vector<Point> > usefulcontours;
////	cap >> src;
////	while (!src.empty())
////	{
////		cap >> src;
////		cvtColor(src, grayImage, COLOR_BGR2GRAY);
////		threshold(grayImage, binImage, 130, 255, THRESH_BINARY_INV);
////		erode(binImage, binImage, element, Point(-1, -1), 2);
////		findContours(binImage, contours/*, hierarchy*/, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
////		imshow("sadd", binImage);
////		int blob = src.cols / 4;
////		for (int k = 0; k < contours.size(); k++) {
////			cout << contourArea(contours[k]) << endl;
////			if (contourArea(contours[k]) > 9000) {
////				usefulcontours.push_back(contours[k]);
////			}
////		}
////		cv::RotatedRect rotateRect = cv::minAreaRect(usefulcontours[0]);
////		int  maxY = rotateRect.center.y;
////		int x = 0;
////		for (int i = 0; i < usefulcontours.size(); i++) {
////			cv::RotatedRect rotateRect = cv::minAreaRect(usefulcontours[i]);
////			int y = rotateRect.center.y;
////			if (y >= maxY) {
////				maxY = y;
////				x = rotateRect.center.x;
////			}
////		}
////		if (x >= 0 && x <= blob) {
////			Send('a');
////			cout << "a" << endl;
////		}
////		if (x >= blob && x <= blob * 2) {
////			Send('b');
////			cout << "b" << endl;
////		}
////		if (x >= blob * 2 && x <= blob * 3) {
////			Send('c');
////			cout << "c" << endl;
////		}
////		if (x >= blob * 3 && x <= blob * 4) {
////			Send('d');
////			cout << "d" << endl;
////		}
////		waitKey(1);
////	}
////}
//#include<iostream>
//#include"Serial.h"
//#include <TCHAR.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <sstream>
//#include<opencv2\opencv.hpp>
//using namespace std;
//using namespace cv;
//CSerial serial;
//void  serialInit() {
//	serial.OpenSerialPort(_T("COM3:"), 9600, 8, 1);
//}
//void Send(char x) {
//	serial.SendData(&x, 1);
//}
//int main(int argc, char** argv) {
//	serialInit();
//	//Mat src=imread("G:\\360Downloads\\ͼƬ\\DIR75\\YX30ozsUXgAAYvIarTuuXQAA&amp;bo=ngL3AQAAAAABAE0!.jpg");
//	VideoCapture cap(0);// open the default camera  
//	Mat src;
//	Mat grayImage;
//	Mat binImage;
//	Mat dilateImage;
//	Mat element = getStructuringElement(MORPH_RECT, Size(2, 2)); //�����õ�
//	vector<vector<Point> > contours;
//	vector<vector<Point> > usefulcontours;//ͼ������
//	cap >> src;
//	while (!src.empty()) {
//
//		cap >> src;
//		//src = imread("C:\\Users\\Administrator\\Desktop\\new\\111.png");
//		//	imwrite("D:\\123\\123.jpg", src);
//		cvtColor(src, grayImage, COLOR_BGR2GRAY);
//		threshold(grayImage, binImage, 130, 255, THRESH_BINARY_INV);
//
//		erode(binImage, binImage, element, Point(-1, -1), 2);
//		/*Rect roi(250, 250, 600, 600);
//		binImage = binImage(roi);*/
//		findContours(binImage, contours, RETR_TREE, CHAIN_APPROX_SIMPLE);
//
//		//drawContours(src, contours, -1, Scalar(0, 0, 255), 2);
//		imshow("sadd", binImage);
//
//		int blob = src.cols / 4;
//
//		for (int k = 0; k < contours.size(); k++) {
//			cout << contourArea(contours[k]) << endl;
//			if (contourArea(contours[k]) > 9000) {
//				usefulcontours.push_back(contours[k]);
//			}
//		}
//
//		//找出4个块的最下面的块
//
//		cv::RotatedRect rotateRect = cv::minAreaRect(usefulcontours[0]);
//		int  maxY = rotateRect.center.y;
//		int x = 0;
//		for (int i = 0; i < usefulcontours.size(); i++) {
//
//			cv::RotatedRect rotateRect = cv::minAreaRect(usefulcontours[i]);
//
//			int y = rotateRect.center.y;
//
//			if (y >= maxY) {
//				maxY = y;
//				x = rotateRect.center.x;
//			}
//		}
//
//		if (x >= 0 && x <= blob) {
//			Send('a');
//			cout << "a" << endl;
//		}
//
//		if (x >= blob && x <= blob * 2) {
//			Send('b');
//			cout << "b" << endl;
//		}
//
//		if (x >= blob * 2 && x <= blob * 3) {
//			Send('c');
//			cout << "c" << endl;
//		}
//
//		if (x >= blob * 3 && x <= blob * 4) {
//			Send('d');
//			cout << "d" << endl;
//		}
//
//
//		//imshow("", src);
//		/*src = NULL;
//		grayImage = NULL;
//		binImage = NULL;
//		dilateImage = NULL;*/
//
//		waitKey(1);
//
//	}
//}