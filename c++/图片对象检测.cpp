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
//	auto model = readNet("Resources/多个对象识别.pb",
//		"Resources/多个对象识别.pbtxt",
//		"TensorFlow");
//	// read the image from disk
//	Mat image = imread("Resources/lol2.png");
//	int image_height = image.cols;
//	int image_width = image.rows;
//	//create blob from image
//	Mat blob = blobFromImage(image, 1.0, Size(300, 300), Scalar(127.5, 127.5, 127.5), true, false);
//	model.setInput(blob);
//	//forward pass through the model to carry out the detection
//	Mat output = model.forward();
//	Mat detectionMat(output.size[2], output.size[3], CV_32F, output.ptr<float>());
//	for (int i = 0; i < detectionMat.rows; i++) {
//		int class_id = detectionMat.at<float>(i, 1);
//		float confidence = detectionMat.at<float>(i, 2);
//		// Check if the detection is of good quality
//		if (confidence > 0.4) {
//			int box_x = static_cast<int>(detectionMat.at<float>(i, 3) * image.cols);
//			int box_y = static_cast<int>(detectionMat.at<float>(i, 4) * image.rows);
//			int box_width = static_cast<int>(detectionMat.at<float>(i, 5) * image.cols - box_x);
//			int box_height = static_cast<int>(detectionMat.at<float>(i, 6) * image.rows - box_y);
//			rectangle(image, Point(box_x, box_y), Point(box_x + box_width, box_y + box_height), Scalar(255, 255, 255), 2);
//			putText(image, class_names[class_id - 1].c_str(), Point(box_x, box_y - 5), FONT_HERSHEY_SIMPLEX, 0.5, Scalar(0, 255, 255), 1.5);
//		}
//	}
//	imshow("image", image);
//	imwrite("image_result.jpg", image);
//	waitKey(0);
//	destroyAllWindows();
//}
//
//#include <opencv2/legacy/legacy.hpp>
//#include <opencv2/imgproc/types_c.h>
//#include <opencv2/highgui.hpp>
//#include <opencv2/opencv.hpp>
//using namespace cv;
//using namespace std;
//int main(int argc, char** argv) {
//	CvPoint center;
//	double scale = -3;
//	IplImage* image = cvLoadImage("img.jpg");
//	argc == 2 ? cvLoadImage(argv[1]) : 0;
//	cvShowImage("Image", image);
//	if (!image) return -1;
//	center = cvPoint(image->width / 2, image->height / 2);
//	for (int i = 0; i < image->height; i++)
//		for (int j = 0; j < image->width; j++) {
//			double dx = (double)(j - center.x) / center.x;
//			double dy = (double)(i - center.y) / center.y;
//			double weight = exp((dx * dx + dy * dy) * scale);
//			uchar* ptr = &CV_IMAGE_ELEM(image, uchar, i, j * 3);
//			ptr[0] = cvRound(ptr[0] * weight);
//			ptr[1] = cvRound(ptr[1] * weight);
//			ptr[2] = cvRound(ptr[2] * weight);
//		}
//	Mat src;
//	Mat dst;
//	src = cvarrToMat(image);
//	cv::imwrite("test.png", src);
//	cvNamedWindow("test", 1);
//	imshow("test", src);
//	cvWaitKey();
//	return 0;
//}