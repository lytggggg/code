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
//	ifstream ifs(string("Resources/多个对象识别.txt").c_str());
//	string line;
//	while (getline(ifs, line)) {
//		class_names.push_back(line);
//	}
//	
//	auto model = readNet("Resources/多个对象识别.pb",
//		"Resources/多个对象识别.pbtxt",
//		"TensorFlow");
//
//	VideoCapture cap(/*"D:\\BaiduNetdiskDownload\\run.mp4"*/0);
//
//	int frame_width = static_cast<int>(cap.get(3));
//	int frame_height = static_cast<int>(cap.get(4));
//
//	VideoWriter out("video_result.avi", VideoWriter::fourcc('M', 'J', 'P', 'G'), 60, Size(frame_width, frame_height));
//	while (cap.isOpened()) {
//		Mat image;
//		if (cap.read(image) == false) {
//						break;
//					}
//		/*bool isSuccess = cap.read(image);*/
//		int image_height = image.cols;
//		int image_width = image.rows;
//
//		Mat blob = blobFromImage(image, 1.0, Size(300, 300), Scalar(127.5, 127.5, 127.5),
//			true, false);
//
//		model.setInput(blob);
//
//		Mat output = model.forward();
//		Mat detectionMat(output.size[2], output.size[3], CV_32F, output.ptr<float>());
//		for (int i = 0; i < detectionMat.rows; i++) {
//			int class_id = detectionMat.at<float>(i, 1);
//			float confidence = detectionMat.at<float>(i, 2);
//
//			if (confidence > 0.4) {
//				int box_x = static_cast<int>(detectionMat.at<float>(i, 3) * image.cols);
//				int box_y = static_cast<int>(detectionMat.at<float>(i, 4) * image.rows);
//				int box_width = static_cast<int>(detectionMat.at<float>(i, 5) * image.cols - box_x);
//				int box_height = static_cast<int>(detectionMat.at<float>(i, 6) * image.rows - box_y);
//				rectangle(image, Point(box_x, box_y), Point(box_x + box_width, box_y + box_height), Scalar(255, 0, 255), 2);
//				putText(image, class_names[class_id - 1].c_str(), Point(box_x, box_y - 5), FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0, 255, 255), 1);
//			}
//		}
//		
//		imshow("image", image);
//		out.write(image);
//		int k = waitKey(10);
//		if (k == 113) {
//			break;
//		}
//	}
//	cap.release();
//	destroyAllWindows();
//}