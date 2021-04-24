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
    
    
    
    imshow("Image",img);
    waitKey(0);
}




    

