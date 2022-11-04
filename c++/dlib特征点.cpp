//#include<iostream>
//#include <dlib/opencv.h> 
//#include <dlib/image_processing/frontal_face_detector.h>
//#include <dlib/image_processing/render_face_detections.h> 
//#include <dlib/image_processing.h> 
//#include <dlib/gui_widgets.h> 
//#include <opencv2/opencv.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/core/core.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
//#include<opencv2/imgcodecs.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
//#include<vector>
//using namespace std;
//using namespace dlib;
//using namespace cv;
//int main(int argc,char *argv[]) {
//	
//
//		//
//		//VideoCapture cap(/*"Resources/ooo.mp4"*/1);
//		//while (cap.isOpened())
//		//{
//		//	Mat mimg, imgGray, img1;
//		//	if (cap.read(mimg) == false) {
//		//		break;
//		//	}
//		//	frontal_face_detector detector = get_frontal_face_detector();
//		//	shape_predictor sp;
//		//	deserialize("Resources/shape_predictor_68_face_landmarks.dat") >> sp;
//		//	/*resize(img, img1, Size(), 1, 1);*/
//		//	cv_image<bgr_pixel> img(mimg);
//		//	
//		//		std::vector<dlib::rectangle> faces = detector(img);
//		//		std::vector<full_object_detection>shapes;
//		//		for (unsigned long i = 0; i < faces.size(); ++i) {
//		//			shapes.push_back(sp(img, faces[i]));
//		//		}
//		//		for (unsigned long j = 0; j < faces.size(); ++j) {
//		//			if (!shapes.empty()) {
//		//				for (int i = 0; i < 68; i++) {
//		//					circle(mimg, cvPoint(shapes[j].part(i).x(), shapes[j].part(i).y()), 1, cv::Scalar(0, 0, 255), 2);
//		//				}
//		//				resize(mimg,mimg, Size(), 0.5, 0.5);
//		//				imshow("Dlib 特征点", mimg);
//		//				waitKey(1);
//		//			}
//		//		}
//		//		
//		//	
//		//}
//
//
//
//
//
//	frontal_face_detector detector = get_frontal_face_detector();
//	shape_predictor sp;
//		deserialize("Resources/shape_predictor_68_face_landmarks.dat") >> sp;
//		Mat mimg = cv::imread("E:/img/lyt1.png");
//		//提取特征 deserialize("shape_predictor_68_face_landmarks.dat") >> sp; cv::Mat mimg = cv::imread(argv[1]);
//		cv_image<bgr_pixel> img(mimg);
//		while (waitKey(30) != 27) {
//			std::vector<dlib::rectangle> faces = detector(img);
//			std::vector<full_object_detection>shapes;
//			for (unsigned long i = 0; i < faces.size(); ++i) {
//				shapes.push_back(sp(img, faces[i]));
//			}
//			for (unsigned long j = 0; j < faces.size();++j) {
//				if (!shapes.empty()) {
//					for (int i = 0; i < 68; i++) {
//						circle(mimg, cvPoint(shapes[j].part(i).x(), shapes[j].part(i).y()), 1, cv::Scalar(0, 0, 255), 2);
//					}
//					imshow("Dlib 特征点", mimg);
//					waitKey(0);
//				}
//			}
//		}
//		
//		
//		
//		
//				
//			
//			
//		
//	
//	
//	
//}