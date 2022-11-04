#include<opencv2/imgcodecs.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
/// <summary>
/// ///////////////////////»­Í¼+Ð´×Ö////////////////////////
/// </summary>
void main4() {
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));
	circle(img, Point(256, 256),/*°ë¾¶R*/155,Scalar(0, 69, 255), /*ÏßµÄºñ¶È*/FILLED/*ÂúµÄ*/);
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	line(img, Point(130, 300), Point(382, 500), Scalar(255, 0, 255), 2);
	putText(img, "Q S B B",Point(137, 256), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255, 2));
	imshow("img", img);


	waitKey(0);
}