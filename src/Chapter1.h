#pragma once
#include"opencv.h"

cv::Mat readingImage(std::string path)
{

	cv::Mat img = cv::imread(path);
	

	return img;
}

cv::VideoCapture runningVideo(std::string path)
{
	cv::VideoCapture vid(path);
	cv::Mat img;
	while (true)
	{
		vid.read(img);
		cv::imshow("anurag", img);
		cv::waitKey(1);
	}
	return vid;
}

void openwebCam(int id)
{
	cv::VideoCapture cam(id);
	cv::Mat img;
	while (true)
	{
		cam.read(img);
		cv::imshow("anurag", img);
		cv::waitKey(1);
	}
}

