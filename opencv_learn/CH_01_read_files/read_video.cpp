// g++ main.cpp -o out -std=c++11 `pkg-config --cflags --libs opencv`


#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;



/// Video ////

int main() {
    string path = "../resources/sample.mp4";
    VideoCapture cap(path);
    Mat img;
    while (true){
        cap.read(img);
        imshow("image",img);
        waitKey(1);
    }

    
}

