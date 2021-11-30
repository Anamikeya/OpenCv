#pragma once
#include"opencv.h"

cv::Mat setSize(cv::Mat img,int HorizontalSize, int VerticalSize)
{
	cv::Mat imgResize;
	std::cout << "before Size : " << img.size() << std::endl;
	cv::resize(img, imgResize, cv::Size(HorizontalSize, VerticalSize));
	return imgResize;

}
cv::Mat setSize(cv::Mat img, double fx, double fy)
{
	cv::Mat imgResize;
	std::cout << "before Size : " << img.size() << std::endl;
	cv::resize(img, imgResize, cv::Size(), fx, fy);
	return imgResize;

}
