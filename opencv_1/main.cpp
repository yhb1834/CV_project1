//
//  main.cpp
//  opencv_1
//
//  Created by 이한별 on 3/19/22.
//

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

Mat first_img, second_img;
Point pt;

void on_mouse(int event, int x, int y, int flags, void*);

int main(int argc, const char * argv[]) {
    first_img = imread("/Users/leehanbyeol/Downloads/1st.jpg", IMREAD_COLOR);
    second_img = imread("/Users/leehanbyeol/Downloads/2nd.jpg", IMREAD_COLOR);
    
    if (first_img.empty()) {
        cerr << "First Image load failed" << endl;
        return -1;
    } else if (second_img.empty()) {
        cerr << "Second Image load failed" << endl;
    }
    namedWindow("first_img");
    namedWindow("second_img");
    
    imshow("first_img", first_img);
    imshow("second_img", second_img);
    
    waitKey(0);
    destroyAllWindows();
    return 0;
}
