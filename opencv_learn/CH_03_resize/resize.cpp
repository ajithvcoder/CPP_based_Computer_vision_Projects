// g++ main.cpp -o out -std=c++11 `pkg-config --cflags --libs opencv`
//#include <opencv4/opencv2

#include <opencv4/opencv2/imgcodecs.hpp>
#include <opencv4/opencv2/highgui.hpp>
#include <opencv4/opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// /// Images ////

int main() {
    string path = "../resources/image_2.jpeg";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    resize(img, imgResize,Size(640,480));
    Rect roi(100,100,300,250);
    imgCrop = img(roi);

    imshow("Image",img);
    imshow("Image_resized",imgResize);
    imshow("Image cropped",imgCrop);
    waitKey(0);
}




    

