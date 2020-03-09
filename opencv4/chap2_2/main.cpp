#include "opencv2/opencv.hpp"
#include <iostream>

int main(void)
{
	std::cout << "hello opencv" << CV_VERSION << std::endl;

	cv::Mat img;
	img = cv::imread("lenna.bmp");

	if (img.empty()) {
		std::cerr << "image load failed!!" << std::endl;
		return -1;
	}

	cv::namedWindow("image");
	cv::imshow("image", img);

	cv::waitKey();
	return 0;
}