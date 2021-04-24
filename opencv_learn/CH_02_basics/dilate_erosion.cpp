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
    Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(img,imgBlur,Size(7,7),5,0);
    Canny(imgBlur,imgCanny,50,150);
    
    Mat kernel = getStructuringElement(MORPH_RECT,Size(3,3));
    dilate(imgCanny,imgDil,kernel);
    erode(imgDil, imgErode,kernel);

    imshow("Image_erode",imgErode);
    imshow("Image_dil",imgDil);
    imshow("Image_gray",imgGray);
    waitKey(0);
}




    

