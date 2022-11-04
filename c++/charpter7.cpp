//#include<opencv2/imgcodecs.hpp>
//#include<opencv2/highgui.hpp>
//#include<opencv2/imgproc.hpp>
//#include<iostream>
//using namespace std;
//using namespace cv;
//
//void getContours(Mat imgDil, Mat img) {
//	//imgDil�Ǵ�������ű�Ե��ͼ����������������img��Ҫ�����ϻ���������ͼ��
//	vector<vector<Point>> contours;//������⵽��������ÿ�������ߴ洢Ϊһ���������
//
//	//��������ӳ�����˵���Ϣ  typedef Vec<int, 4> Vec4i;����4������ֵ
//	vector<Vec4i> hierarchy;
//	//�ڶ�ֵͼ���в����������ú������ø��㷨�Ӷ�ֵͼ������ȡ����
//	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
//	vector<vector<Point>> conPoly(contours.size());//����approxCurve
//	vector<Rect> boundRect(contours.size());//����洢�߽��ı���
//	for (int i = 0; i < contours.size(); i++) {//������⵽������
//		int area = contourArea(contours[i]);
//		//cout << area << endl;		
//		string objectType;//�����������ͣ�����������ֵ��߽��
//		if (area > 1000) {//���������1000�Ż���
//			//���� 0.02*�����ܳ�Ϊ�����Ľ��ޣ����ȣ�
//			float peri = arcLength(contours[i], true);
//			//��ָ���ľ��Ƚ��ƶ�������ߡ��ڶ�������conPloy[i]�洢���ƵĽ�����������
//			approxPolyDP(contours[i], conPoly[i], 0.02 * peri, true);
//			boundRect[i] = boundingRect(conPoly[i]);//����߽����
//			//�ҽ��ƶ���εĽǵ�,��������3���ǵ㣬����/��������4���ǵ㣬Բ��>4���ǵ�
//			int objCor = (int)conPoly[i].size();
//			//cout << objCor << endl;
//			if (objCor == 3) { objectType = "Tri"; }
//			else if (objCor == 4) {//�ĸ��ǵ��һ���ж��������λ��ǳ�����
//				float aspRatio = (float)boundRect[i].width / (float)boundRect[i].height;//��߱�
//				if (aspRatio > 0.95 && aspRatio < 1.05) { objectType = "Square"; }
//				else objectType = "Rect";
//			}
//			//���� objCor ����4 ���ж�ΪԲ�ι��ھ����ˣ�������ʾ��ͼƬ�ǿ��Ե�
//			else if (objCor > 4) { objectType = "Circle"; }
//			//drawContours(img, conPoly, i, Scalar(255, 0, 255), 2);
//			//���Ʊ߽����
//			rectangle(img, boundRect[i].tl(), boundRect[i].br(), Scalar(0, 255, 0), 5);
//			//��ӱ�ע��boundRect[i].y-5 ��Ϊ�˽����ַ��ӿ���Ϸ�
//			putText(img, objectType, { boundRect[i].x,boundRect[i].y - 5 }/*��������*/, FONT_HERSHEY_PLAIN, 1, Scalar(0, 69, 255), 1);
//		}
//	}
//}
//
//void main() {
//	string path = "Resources/ggg.png";
//	Mat img = imread(path);
//	Mat imgGray, imgBlur, imgCanny, imgDil;
//	Mat imgHSV, mask;
//	cvtColor(img, imgHSV, COLOR_BGR2GRAY);
//	Scalar lower(0, 0, 0);
//	Scalar higher(179, 255, 0);
//	inRange(imgHSV, lower, higher, mask);
//	//cvt��convert����д����ͼ���һ����ɫ�ռ�ת��Ϊ��һ����ɫ�ռ䡣
//	GaussianBlur(mask, imgBlur, Size(3, 3), 3, 0);
//	//ʹ�ø�˹�˲���ģ��ͼ�񡣸ú�����Դͼ����ָ���ĸ�˹�˽��о��,Size(7,7)�Ǻ˴�С,����Խ��Խģ��
//	Canny(imgBlur, imgCanny, 25, 75);
//	//��Ե��⣬��ֵ1��2�ɵ���Ŀ�ģ���ʾ����ı�Ե
//	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//	//����һ���ˣ�����Size��ֻ����������������/��ʴ����
//	dilate(imgCanny, imgDil, kernel);//���ű�Ե�����ӱ�Ե���
//
//	getContours(imgDil, img);//img�������ϻ�������ͼƬ
//
//	imshow("Image", img);
//	imshow("Image1", mask);
//	imshow("Image2", imgBlur);
//	imshow("Image3", imgCanny);
//	imshow("Image4", imgDil);
//	waitKey(0);//������ʱ��0��ʾ����
//
//	
//}