//#include<cstdio>
//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<fstream>
//#include<cstring>
//#include<cstdlib>
//#include<cmath>
//#include <dlib/opencv.h> 
//#include <dlib/image_processing/frontal_face_detector.h>
//#include <dlib/image_processing/render_face_detections.h> 
//#include <dlib/image_processing.h> 
//#include <dlib/gui_widgets.h> 
//#include <dlib/clustering.h>
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/core/core.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/imgproc.hpp>
//#include <opencv2/freetype.hpp>
//#include <dlib/dnn.h>
//#include <dlib/gui_widgets.h>
//#include <dlib/clustering.h>
//#include <dlib/string.h>
//#include <dlib/image_io.h>
//#include "putTextCN.h"
//using namespace dlib;
//using namespace std;
//using namespace cv;
//template <template <int, template<typename>class, int, typename> class block, int N, template<typename>class BN, typename SUBNET>
//using residual = add_prev1<block<N, BN, 1, tag1<SUBNET>>>;
//template <template <int, template<typename>class, int, typename> class block, int N, template<typename>class BN, typename SUBNET>
//using residual_down = add_prev2<avg_pool<2, 2, 2, 2, skip1<tag2<block<N, BN, 2, tag1<SUBNET>>>>>>;
//template <int N, template <typename> class BN, int stride, typename SUBNET>
//using block = BN<con<N, 3, 3, 1, 1, relu<BN<con<N, 3, 3, stride, stride, SUBNET>>>>>;
//template <int N, typename SUBNET> using ares = relu<residual<block, N, affine, SUBNET>>;
//template <int N, typename SUBNET> using ares_down = relu<residual_down<block, N, affine, SUBNET>>;
//template <typename SUBNET> using alevel0 = ares_down<256, SUBNET>;
//template <typename SUBNET> using alevel1 = ares<256, ares<256, ares_down<256, SUBNET>>>;
//template <typename SUBNET> using alevel2 = ares<128, ares<128, ares_down<128, SUBNET>>>;
//template <typename SUBNET> using alevel3 = ares<64, ares<64, ares<64, ares_down<64, SUBNET>>>>;
//template <typename SUBNET> using alevel4 = ares<32, ares<32, ares<32, SUBNET>>>;
//using anet_type = loss_metric<fc_no_bias<128, avg_pool_everything<
//	alevel0<
//	alevel1<
//	alevel2<
//	alevel3<
//	alevel4<
//	max_pool<3, 3, 2, 2, relu<affine<con<32, 7, 7, 2, 2,
//	input_rgb_image_sized<150>
//	>>>>>>>>>>>>;
//void openC() {
//	VideoCapture cap(1);
//	string path = "D:/秋衫.png";
//	while (cap.isOpened())
//	{
//		
//		Mat img, imgGray, img1;
//		if (cap.read(img) == false) {
//			break;
//		}
//	
//		
//		if (char(waitKey(10)) =='q') {
//			imwrite(path, img);
//			break;
//		}
//		CascadeClassifier face_cascade;
//		face_cascade.load("Resources/haarcascade_frontalface_alt.xml");
//		std::vector<Rect> rect;
//		cvtColor(img, imgGray, COLOR_BGR2GRAY);
//		face_cascade.detectMultiScale(imgGray, rect, 1.1, 3, 0);
//		for (int i = 0; i < rect.size(); i++) {
//
//			cv::rectangle(img, Point(rect[i].x, rect[i].y), Point(rect[i].x + rect[i].width, rect[i].y + rect[i].height), Scalar(0, 69, 255), 2);
//		}
//		imshow("img", img);
//		waitKey(10);
//
//	}
//
//	destroyAllWindows();
//	cap.release();
//	
//}
//void main() {
//	openC();
//	cv::Mat mimg;
//	std::vector<matrix<float, 0, 1>> vec;
//	float vec_error[30];
//	int count_img = 0;
//	std::vector<cv::String> fileNames, img_path;
//	cv::glob("D:/秋衫.png", img_path);
//	fileNames = img_path;
//	for (int i = 0; i < img_path.size(); i++) {
//		if ((img_path[i].find("jpg") != img_path[i].npos) || (img_path[i].find(".png") != img_path[i].npos)) {
//			size_t pos = img_path[i].find_last_of('\\');
//			size_t len = img_path[i].find_last_of('.');
//			fileNames[i] = img_path[i].substr(pos + 1, len - pos - 1);
//			//cout << "file name:" << fileNames[i] << endl;
//			count_img++;
//		}
//	}
//	//cout << "the number of picture is:" << count_img << endl;
//	frontal_face_detector detector = get_frontal_face_detector();
//	shape_predictor sp;
//	deserialize("Resources/shape_predictor_68_face_landmarks.dat") >> sp;
//	anet_type  net;
//	deserialize("Resources/dlib_face_recognition_resnet_model_v1.dat") >> net;
//	matrix<rgb_pixel>img_obj;
//	for (int k = 0; k < count_img; k++) {
//		string fileFullName = img_path[k];
//		load_image(img_obj, fileFullName);
//		std::vector<dlib::rectangle>dets = detector(img_obj);
//		if (dets.size() < 1) {
//			cout << "is no face " << endl;
//		}
//		else if (dets.size() > 1) {
//			cout << "is no many face " << endl;
//		}
//		else {
//			std::vector<matrix<rgb_pixel>>faces;
//			auto shape = sp(img_obj, dets[0]);
//			matrix<rgb_pixel> face_chip;
//			extract_image_chip(img_obj, get_face_chip_details(shape, 150, 0.25), face_chip);
//			faces.push_back(move(face_chip));
//			std::vector<matrix<float, 0, 1>>face_descriptors = net(faces);
//			vec.push_back(face_descriptors[k]);
//			//cout << img_path[k] << endl;
//		}
//	}
//	string src_path = "E:/img/ljq.png";
//	mimg = cv::imread(src_path);
//	dlib::cv_image<bgr_pixel>img_src(mimg);
//	std::vector<matrix<rgb_pixel>>faces_test;
//	for (auto face_test : detector(img_src)) {
//		auto shape_test = sp(img_src, face_test);
//		matrix<rgb_pixel>face_chip_test;
//		extract_image_chip(img_src, get_face_chip_details(shape_test, 150, 0.25), face_chip_test);
//		faces_test.push_back(move(face_chip_test));
//	}
//	std::vector<dlib::rectangle>dets_test = detector(img_src);
//	std::vector<matrix<float, 0, 1>>faces_test_descriptors = net(faces_test);
//	//cout << "size:" << faces_test_descriptors.size() << endl;
//	for (size_t i = 0; i < faces_test_descriptors.size(); i++) {
//		for (size_t j = 0; j < vec.size(); j++) {
//			vec_error[j] = (double)length(faces_test_descriptors[i] - vec[j]);
//			const char* test = "不熟";
//			if (vec_error[j] < 0.4) {
//				test = fileNames[j].c_str();
//				cout << "找到:" << fileNames[j] << " ," << test << endl;
//			}
//			cv::Point origin;
//			origin.x = dets_test[i].left();
//			origin.y = dets_test[i].top();
//			putTextZH(mimg, test, origin, Scalar(255, 0, 0),0.25, "微软雅黑", false, false);
//		}
//		cv::rectangle(mimg, cv::Rect(dets_test[i].left(), dets_test[i].top(), dets_test[i].width(), dets_test[i].width()), cv::Scalar(0, 0, 255), 1, 1, 0);
//	}
//
//	imshow("src", mimg);
//	waitKey(0);
//}