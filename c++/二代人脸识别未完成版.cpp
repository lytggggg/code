//#include<opencv2/opencv.hpp>
//#include<face.hpp>
//#include "opencv2/core.hpp"
//#include "opencv2/face.hpp"
//#include<opencv2/freetype.hpp>
//#include<iostream>
//#include<fstream>
//#include "putTextCN.h"
//#include<Algorithm>
//using namespace std;
//using namespace cv;
//using namespace cv::face;
//string haar_face_datapath = "Resources / haarcascade_frontalface_alt.xml";
//void paface() {
//	int count = 0;
//	VideoCapture cap(1);
//
//	CascadeClassifier face_cascade;
//	face_cascade.load("Resources/haarcascade_frontalface_alt.xml");
//	Mat frame, img;
//	vector<Rect> faces;
//	while (cap.isOpened()) {
//		if (cap.read(frame) == false) {
//			break;
//		}
//		flip(frame, frame, 1);
//		face_cascade.detectMultiScale(frame, faces, 1.1, 3, 0, Size(100, 120), Size(380, 400));
//		for (int i = 0; i < faces.size(); i++) {
//			img = frame;
//			rectangle(frame, faces[i], Scalar(0, 0, 255), 2, 8, 0);
//			char c = waitKey(10);
//			if (c == 32) {
//				Mat dst;
//				resize(img(faces[i]), dst, Size(100, 100));
//				imwrite(format("E:/img2/face_%d.jpg", ++count), dst);
//				cout << "save:face" << count << endl;
//			}
//			else if (c == 27) {
//				cap.release();
//			}
//			else if (c == 'n') {
//				break;
//			}
//		}
//		imshow("img", frame);
//		waitKey(10);
//	}
//}
//void main() {
//	string filename = string("E:/img.txt");
//	ifstream file(filename.c_str(), ifstream::in);
//	if (!file) {
//		cout << "no";
//	}
//	string line, path, classlabel;
//	vector <Mat>images;
//	vector<int>labels;
//	char separator = ';';
//	while (getline(file, line)) {
//		stringstream liness(line);
//		getline(liness, path, separator);
//		getline(liness, classlabel);
//		if (!path.empty() && !classlabel.empty()) {
//			images.push_back(imread(path, 0));
//			labels.push_back(atoi(classlabel.c_str()));
//		}
//	}
//	if (images.size() < 1 || labels.size() < 1) {
//		cout << "no";
//	}
//	int height = images[0].rows;
//	int width = images[0].cols;
//	Mat testSample = images[images.size() - 1];
//	int testLabel = labels[labels.size() - 1];
//	images.pop_back();
//	labels.pop_back();
//	//Ptr<BasicFaceRecognizer>model = FisherFaceRecognizer::create();
//	
//	Ptr<FaceRecognizer> model=EigenFaceRecognizer::create(10, 10.0);
//
//	model->train(images, labels);
//	int predictedLabel = model->predict(testSample);
//	CascadeClassifier faceDetector;
//	faceDetector.load(haar_face_datapath);
//
//
//	VideoCapture cap(1);
//	Mat frame;
//	vector<Rect>faces;
//	Mat dst;
//	while (cap.isOpened()) {
//		if (cap.read(frame) == false) {
//			break;
//		}
//		flip(frame, frame, 1);
//		faceDetector.detectMultiScale(frame, faces, 1.1, 3, 0, Size(80, 100), Size(380, 400));
//		for (int i = 0; i < faces.size(); i++) {
//			Mat roi = frame(faces[i]);
//			cvtColor(roi, dst, COLOR_BGR2GRAY);
//			resize(dst,testSample,testSample.size());
//			int label = model->predict(testSample);
//			rectangle(frame, faces[i], Scalar(255, 0, 0), 2, 8, 0);
//			const char* text;
//			if (label == 20) {
//				text = "«Ô…¿";
//			}
//			putTextZH(frame, text, faces[i].tl(), Scalar(255, 0, 0), 0.25, "Œ¢»Ì—≈∫⁄", false, false);
//		}
//		imshow("sad", frame);
//		waitKey(1);
//
//	}
//
//}