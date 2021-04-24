// g++ main.cpp -o out -std=c++11 `pkg-config --cflags --libs opencv`

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// /// Color Detection ////

void getContours(Mat imgDil, Mat img){

    vector<vector<Point>> contours;
    vector<Vec4i> hierarchy;


    findContours(imgDil,contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
    // drawContours(img,contours,-1,Scalar(255,0,255),2);

    for(int i=0;i<contours.size();i++){
        int area = contourArea(contours[i]);
        cout<<area<<endl;
        if (area > 1000)
        {
            drawContours(img,contours,i,Scalar(255,0,255),2);
        } 
    }

}

int main() {
    string path = "../Resources/shapes.png";
    Mat img = imread(path);
    Mat imgGray, imgBlur, imgCanny,imgDil;
    cvtColor(img, imgGray, COLOR_BGR2GRAY);
    GaussianBlur(imgGray,imgBlur,Size(3,3),3,0);
    Canny(imgBlur, imgCanny,25,75);
    Mat kernel = getStructuringElement(MORPH_RECT,Size(3,3));
    dilate(imgCanny, imgDil, kernel);

    getContours(imgDil, img);
    imshow("Image Canny",imgCanny);
    imshow("Image Dil",imgDil);
    imshow("Image",img);
    waitKey(0);
    return 0;
}




    

