#include<string>
#include<atlimage.h>
#include <time.h>
#include <iostream>
//using namespace std;
//
//bool SavePic(wstring name, HWND hWnd) {
//	HDC hDc = NULL;
//	hWnd = (hWnd == NULL) ? GetDesktopWindow() : hWnd; //判断窗口句柄是否为NULL,如果为NULL则默认获取桌面DC
//	hDc = GetDC(hWnd); //获取DC
//	if (hDc == NULL) return false;
//	int bitOfPix = GetDeviceCaps(hDc, BITSPIXEL); //获取DC像素的大小
//	int width = GetDeviceCaps(hDc, HORZRES);  //获取DC宽度
//	int hight = GetDeviceCaps(hDc, VERTRES);  //获取DC高度
//	UINT dpi = GetDpiForWindow(hWnd); //获取dpi
//	float fold; //根据dpi计算放大倍数
//	switch (dpi) {
//	case 96:
//		fold = 1;
//		break;
//	case 120:
//		fold = 1.25;
//		break;
//	case 144:
//		fold = 1.5;
//		break;
//	case 192:
//		fold = 2;
//		break;
//	case 216:
//		fold = 2.25;
//		break;
//	default:
//		fold = 1;
//		break;
//	}
//	width *= fold; //复原宽度
//	hight *= fold; //复原高度
//	CImage image;
//	image.Create(width, hight, bitOfPix); //为图像类创建与窗口DC相同大小的DC
//	BitBlt(image.GetDC(), 0, 0, width, hight, hDc, 0, 0, SRCCOPY); //将窗口DC图像复制到image
//	image.Save(name.data(), Gdiplus::ImageFormatPNG); //保存为png格式图片文件
//	image.ReleaseDC(); //释放DC
//	ReleaseDC(hWnd, hDc); //释放DC资源
//}
//int main() {
//	clock_t start, end;
//	start = clock();
//	
//	SavePic(L"c:\\tmp\\1.jpg",NULL);
//	end = clock();   //结束时间
//	cout << "time = " << double(end - start) / CLOCKS_PER_SEC << "s" << endl;
//}

//#include <iostream>
//#include <windows.h>
//#include <cstdlib>
//#include<bitset>
//
//#include <conio.h>
//#include <thread>
//#include <vector>
//using namespace std;
//void Click(int KEY)
//{
//	keybd_event(KEY, 0, KEYEVENTF_EXTENDEDKEY | 0, 0);            //相当于 keybd_event(KEY,0,0,0);
//	keybd_event(KEY, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0); //相当于 keybd_event(KEY,0,2,0);
//}
//
//int main()
//{	
//	Sleep(3000);
//	Click(71);
//	return 0;
//}
#include <iostream>
#include <windows.h>
#include<atlimage.h>
#include <time.h>
#include "opencv2/highgui/highgui_c.h"
#include "opencv2/imgproc/imgproc_c.h"
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;
bool SavePic(wstring name, HWND hWnd) {
	HDC hDc = NULL;
	hWnd = (hWnd == NULL) ? GetDesktopWindow() : hWnd; //判断窗口句柄是否为NULL,如果为NULL则默认获取桌面DC
	hDc = GetDC(hWnd); //获取DC
	if (hDc == NULL) return false;
	int bitOfPix = GetDeviceCaps(hDc, BITSPIXEL); //获取DC像素的大小
	int width = GetDeviceCaps(hDc, HORZRES);  //获取DC宽度
	int hight = GetDeviceCaps(hDc, VERTRES);  //获取DC高度
	UINT dpi = GetDpiForWindow(hWnd); //获取dpi
	float fold; //根据dpi计算放大倍数
	switch (dpi) {
	case 96:
		fold = 1;
		break;
	case 120:
		fold = 1.25;
		break;
	case 144:
		fold = 1.5;
		break;
	case 192:
		fold = 2;
		break;
	case 216:
		fold = 2.25;
		break;
	default:
		fold = 1;
		break;
	}
	width *= fold; 
	hight *= fold; 
	CImage image;
	image.Create(width, hight, bitOfPix);
	BitBlt(image.GetDC(), 0, 0, width, hight, hDc, 0, 0, SRCCOPY);
	
	image.Save(name.data(), Gdiplus::ImageFormatPNG);
	image.ReleaseDC(); 
	ReleaseDC(hWnd, hDc);
}
void Click(int KEY)
{
	keybd_event(KEY, 0, KEYEVENTF_EXTENDEDKEY | 0, 0);            
	keybd_event(KEY, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0); 
}
void getContours(Mat imgDil, Mat img) {
	vector<vector<Point>> arr;

	vector<vector<Point>> contours;

	vector<Vec4i> hierarchy;
	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
	vector<vector<Point>> conPoly(contours.size());
	vector<Rect> boundRect(contours.size());
	for (int i = 0; i < contours.size(); i++) {
		int area = contourArea(contours[i]);
		string objectType;
		if (area > 200) {
			float peri = arcLength(contours[i], true);
			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
			boundRect[i] = boundingRect(conPoly[i]);
			int objCor = (int)conPoly[i].size();
			/*if (objCor == 3) { objectType = "Tri"; }
			else if (objCor == 4) {
				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;
				if (aspRatio > 0.95 && aspRatio < 1.05) { objectType = "Square"; }
				else objectType = "Rect";
			}
			else if (objCor > 4) { objectType = "Circle"; }*/
			//rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
			vector <Point> a;
			a.push_back(boundRect[i].tl());
			a.push_back(boundRect[i].br());
			arr.push_back(a);
			//putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }, FONT_HERSHEY_PLAIN, 1, Scalar(0, 69, 255), 1);
		}
	}
	//cout << arr.size() << endl;
	vector<Point> tmp;
	for (int i = 0; i < arr.size(); i++) {
		int x = (arr[i][0].x + arr[i][1].x) / 2;
		int y = (arr[i][0].y + arr[i][1].y) / 2;
		circle(img, Point(x,y), 1, Scalar(0, 0, 0), 8, 8);

		Point a;
		a.x = x;
		a.y = y;
		tmp.push_back(a);
		
		
	}
	
	if (arr.size() == 3) {
		int a = rand() % 3;
		mouse_event(MOUSEEVENTF_MOVE, (tmp[a].x - 960), (tmp[a].y - 540), 0, 0);

		Click(71);
		Sleep(1);
		if (a == 1) {
			mouse_event(MOUSEEVENTF_MOVE, (tmp[0].x - 960), (tmp[0].y - 540), 0, 0);

			Click(71);
			mouse_event(MOUSEEVENTF_MOVE, -(tmp[0].x - 960), -(tmp[0].y - 540), 0, 0);

		}

		/*Sleep(1);
		tmp[1].x = tmp[1].x - (tmp[0].x - 960);
		tmp[1].y = tmp[1].y - (tmp[0].y - 540);	
		tmp[2].x = tmp[2].x - (tmp[0].x - 960);
		tmp[2].y = tmp[2].y - (tmp[0].y - 540);
		mouse_event(MOUSEEVENTF_MOVE, (tmp[1].x - 960), (tmp[1].y - 540), 0, 0);
		Click(71);
		Sleep(1);

		tmp[2].x = tmp[2].x - (tmp[1].x - 960);
		tmp[2].y = tmp[2].y - (tmp[1].y - 540);
		mouse_event(MOUSEEVENTF_MOVE, (tmp[2].x - 960), (tmp[2].y - 54ggggggggggggggggg0), 0, 0);
		Click(71);


		mouse_event(MOUSEEVENTF_MOVE, -(tmp[2].x - 960), -(tmp[2].y - 540), 0, 0);
		

		mouse_event(MOUSEEVENTF_MOVE, -(tmp[1].x - 960), -(tmp[1].y - 540), 0, 0);
		*/

		mouse_event(MOUSEEVENTF_MOVE, -(tmp[a].x - 960), -(tmp[a].y - 540), 0, 0);


	}
	/*if (arr.size() == 2) {
		int a = rand() % 2;
		mouse_event(MOUSEEVENTF_MOVE, (tmp[a].x - 960), (tmp[a].y - 540), 0, 0);

		Click(71);
		Sleep(1);

		mouse_event(MOUSEEVENTF_MOVE, -(tmp[a].x - 960), -(tmp[a].y - 540), 0, 0);
	}
	if (arr.size() == 1) {
		
		mouse_event(MOUSEEVENTF_MOVE, (tmp[0].x - 960), (tmp[0].y - 540), 0, 0);

		Click(71);	
		Sleep(1);

		mouse_event(MOUSEEVENTF_MOVE, -(tmp[0].x - 960), -(tmp[0].y - 540), 0, 0);
	}*/

}
int main() {
	
	Sleep(5000);
	Mat imgOriginal;
	Mat imgHSV;
	Mat imgThresholded;
	Mat element;
	vector<Mat> hsvSplit;

	int a = 0;
	while (true) {
		
		SavePic(L"c:\\tmp\\1.jpg", NULL);
		imgOriginal = imread("c:\\tmp\\1.jpg");
	
		
		cvtColor(imgOriginal, imgHSV, COLOR_BGR2HSV);
		split(imgHSV, hsvSplit);
		equalizeHist(hsvSplit[2], hsvSplit[2]);
		merge(hsvSplit, imgHSV);
		inRange(imgHSV, Scalar(78, 43, 46), Scalar(99, 255, 255), imgThresholded);
	
		element = getStructuringElement(MORPH_RECT, Size(5, 5));
		morphologyEx(imgThresholded, imgThresholded, MORPH_OPEN, element);
		
		morphologyEx(imgThresholded, imgThresholded, MORPH_CLOSE, element);
		getContours(imgThresholded, imgOriginal);
		
		
	}
	return 0;
}
