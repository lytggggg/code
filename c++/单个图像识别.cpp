//#include <iostream>
//#include <fstream>
//#include <opencv2/opencv.hpp>
//#include <opencv2/dnn.hpp>
//#include <opencv2/dnn/all_layers.hpp>
//using namespace std;
//using namespace cv;
//using namespace dnn;
//void main() {
//	vector<std::string> class_names;
//	ifstream ifs(string("Resources/图片识别.txt").c_str());
//	string line;
//	while (getline(ifs, line)) {
//		class_names.push_back(line);
//	}
//	auto model = readNet("Resources/图片识别.prototxt",
//		"Resources/图片识别.caffemodel",
//		"Caffe");
//	Mat image = imread("Resources/beizi.png");
//	Mat blob = blobFromImage(image, 0.01, Size(224, 224), Scalar(104, 117, 123));
//	model.setInput(blob);
//	Mat outputs = model.forward();
//	Point classIdPoint;
//	double final_prob;
//	minMaxLoc(outputs.reshape(1, 1), 0, &final_prob, 0, &classIdPoint);
//	int label_id = classIdPoint.x;
//	string out_text = format("%s, %.3f", (class_names[label_id].c_str()), final_prob);
//	putText(image, out_text, Point(25, 50), FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 255, 0), 2);
//	imshow("Image", image);
//	imwrite("result.jpg", image);
//	waitKey(0);
//}