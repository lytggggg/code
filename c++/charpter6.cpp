//#include<opencv2/imgcodecs.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
///// <summary>
///// ///////////////////////Í¼Æ¬ÑÕÉ«¼ì²â////////////////////////
///// </summary>
//int hmax = 179, hmin = 0;
//int smax = 255, smin = 0;
//int vmax = 255, vmin = 0;
//
//void main() {
//	string path = "Resources/ggg.png";
//	Mat img = imread(path);
//	Mat imgHSV, mask;
//	cvtColor(img, imgHSV, COLOR_BGR2HSV);
//
//	namedWindow("Trackbars", (640, 200));
//	
//	createTrackbar("Hmin", "Trackbars", &hmin, 179);
//	createTrackbar("Hmax", "Trackbars", &hmax, 179);
//	createTrackbar("Smin", "Trackbars", &smin, 255);
//	createTrackbar("Smax", "Trackbars", &smax, 255);
//	createTrackbar("Vmin", "Trackbars", &vmin, 255);
//	createTrackbar("Vmax", "Trackbars", &vmax, 255);
//	
//
//
//	while (true) {
//		Scalar lower(0, 0, 0);
//		Scalar higher(179, 255, 0);
//		inRange(imgHSV, lower, higher, mask);
//		imshow("img", img);
//		imshow("img HSV", imgHSV);
//		imshow("img mask", mask);
//		waitKey(1);
//
//	}
//	
//	
//}