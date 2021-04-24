// g++ main.cpp -o out -std=c++11 `pkg-config --cflags --libs opencv`

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// /// Images ////

int main() {
    string path = "../resources/image_2.jpeg";
    Mat img = imread(path);
    Mat imgGray, imgBlur;
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img,imgBlur,Size(7,7),5,0);

    imshow("Image_blur",imgBlur);
    imshow("Image_gray",imgGray);
    waitKey(0);
}




    

