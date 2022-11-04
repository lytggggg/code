//#include <iostream>
//#include <fstream>
//#include <opencv2/opencv.hpp>
//#include <opencv2/dnn.hpp>
//#include <opencv2/dnn/all_layers.hpp>
//#include "putTextCN.h"
//using namespace std;
//using namespace cv;
//using namespace dnn;
//
//void main() {
//	//string path = "lyf.webp";
//	//Mat img = imread(path);
//	//CascadeClassifier face_cascade ;
//	//face_cascade.load("Resources/haarcascade_frontalface_alt.xml");
//	//vector<Rect> rect;
//	//face_cascade.detectMultiScale(img,rect,1.1,3,0);
//	//
//	//for (int i = 0; i < rect.size(); i++) {
//	//	if (rect[i].width * rect[i].height > 2025) {
//	//		
//	//		rectangle(img, Point(rect[i].x, rect[i].y), Point(rect[i].x + rect[i].width, rect[i].y + rect[i].height), Scalar(0, 69, 255), 2);
//	//		
//	//     }
//	//}
//	//Mat img2;
//	//
//	//imshow("img", img);
//	//waitKey(0);
//	//destroyAllWindows();
//	VideoCapture cap(/*"Resources/ooo.mp4"*/0);
//	
//	while (cap.isOpened())
//	{
//		Mat img, imgGray, img1;
//		if (cap.read(img)==false) {
//			break;
//		}
//		/*resize(img, img1, Size(), 1, 1);*/
//		int a = waitKey(10);
//		if (a = 113) {
//			imwrite("D:/test.png", img);
//		}
//		CascadeClassifier face_cascade;
//		face_cascade.load("Resources/haarcascade_frontalface_alt.xml");
//		vector<Rect> rect;
//		cvtColor(img, imgGray, COLOR_BGR2GRAY);
//		face_cascade.detectMultiScale(imgGray, rect, 1.1, 3, 0);
//		for (int i = 0; i < rect.size(); i++) {
//
//			rectangle(img, Point(rect[i].x, rect[i].y), Point(rect[i].x + rect[i].width, rect[i].y + rect[i].height), Scalar(0, 255, 0), 2);
//		}
//		imshow("img", img);
//		waitKey(10);
//	}
//	
//	destroyAllWindows();
//	cap.release();
//
//}