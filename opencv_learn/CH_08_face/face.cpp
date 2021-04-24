// g++ main.cpp -o out -std=c++11 `pkg-config --cflags --libs opencv`

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// /// Images ////

int main() {
    string path = "../Resources/test.png";
    Mat img = imread(path);
    CascadeClassifier faceCascade;
    faceCascade.load("../Resources/haarcascade_frontalface_default.xml");

    if (faceCascade.empty()){
        cout<<"XML file loaded"<<endl;
    }
    
    vector<Rect> faces;
    faceCascade.detectMultiScale(img, faces, 1.1,10);

    for (int i=0;i<faces.size();i++)
    {
        rectangle(img, faces[i].tl(),faces[i].br(),Scalar(255,0,255),3);
    }

    imshow("Image",img);
    waitKey(0);
}




    

