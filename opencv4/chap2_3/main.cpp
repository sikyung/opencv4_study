#include "opencv2/opencv.hpp"
#include <iostream>


using namespace cv;
using namespace std;

int main(void)
{
	std::cout << "hello opencv" << CV_VERSION << std::endl;

	Mat img;
	img = imread("lenna.bmp");

	if (img.empty()) {
		cerr << "image load failed!!" << endl;
		return -1;
	}

	namedWindow("image");
	imshow("image2", img);

	waitKey();
	return 0;
}