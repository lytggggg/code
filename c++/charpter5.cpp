//#include<opencv2/imgcodecs.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
///// <summary>
///// ////////////////Í¼Æ¬½ÃÕý////////////////////
///// </summary>
//float w = 500, h = 300;
//void main5() {
//
//	string path = "Resources/test5.png";
//	Mat img = imread(path);
//	Point2f src[4] = { {285,15},{701,221},{247,787},{681,895} };
//	Point2f dst[4] = { {0.0f,0.0f}, {w,0.0f},{0.0f,h},{w,h} };
//	Mat matrix = getPerspectiveTransform(src, dst);
//	Mat imgWrap;
//	warpPerspective(img, imgWrap, matrix, Point(w, h));
//
//	imshow("Image", img);
//	imshow("Image Warp", imgWrap);
//	waitKey(0);
//
//
//}