//#include <opencv2/imgproc.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/dnn.hpp>
//#include <tuple>
//#include <iostream>
//#include <opencv2/opencv.hpp>
//#include <iterator>
//#include "putTextCN.h"
//using namespace cv;
//using namespace cv::dnn;
//using namespace std;
//
//tuple<Mat, vector<vector<int>>> getFaceBox(Net net, Mat& frame, double conf_threshold)
//{
//    Mat frameOpenCVDNN = frame.clone();
//    int frameHeight = frameOpenCVDNN.rows;
//    int frameWidth = frameOpenCVDNN.cols;
//    double inScaleFactor = 1.0;
//    Size size = Size(300, 300);
//    // std::vector<int> meanVal = {104, 117, 123};
//    Scalar meanVal = Scalar(104, 117, 123);
//
//    cv::Mat inputBlob;
//    inputBlob = cv::dnn::blobFromImage(frameOpenCVDNN, inScaleFactor, size, meanVal, true, false);
//
//    net.setInput(inputBlob, "data");
//    cv::Mat detection = net.forward("detection_out");
//
//    cv::Mat detectionMat(detection.size[2], detection.size[3], CV_32F, detection.ptr<float>());
//
//    vector<vector<int>> bboxes;
//
//    for (int i = 0; i < detectionMat.rows; i++)
//    {
//        float confidence = detectionMat.at<float>(i, 2);
//
//        if (confidence > conf_threshold)
//        {
//            int x1 = static_cast<int>(detectionMat.at<float>(i, 3) * frameWidth);
//            int y1 = static_cast<int>(detectionMat.at<float>(i, 4) * frameHeight);
//            int x2 = static_cast<int>(detectionMat.at<float>(i, 5) * frameWidth);
//            int y2 = static_cast<int>(detectionMat.at<float>(i, 6) * frameHeight);
//            vector<int> box = { x1, y1, x2, y2 };
//            bboxes.push_back(box);
//            cv::rectangle(frameOpenCVDNN, cv::Point(x1, y1), cv::Point(x2, y2), cv::Scalar(0, 255, 0), 2, 4);
//        }
//    }
//
//    return make_tuple(frameOpenCVDNN, bboxes);
//}
//void main() {
//    string faceProto = "D:/BaiduNetdiskDownload/opencv_face_detector.pbtxt";
//    string faceModel = "D:/BaiduNetdiskDownload/opencv_face_detector_uint8.pb";
//    Net faceNet = readNet(faceModel, faceProto);
//    VideoCapture cap(0);
//    int padding = 20;
//    while (cap.isOpened()) {
//        Mat frame;
//
//        if (cap.read(frame) == false) {
//            break;
//        }
//
//        waitKey(10);
//        vector<vector<int>> bboxes;
//        Mat frameFace;
//        tie(frameFace, bboxes) = getFaceBox(faceNet, frame, 0.7);
//        imshow("asd", frameFace);
//    }
//}