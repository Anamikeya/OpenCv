#pragma once
#include"opencv.h"

cv::Mat greyScale(std::string path)
{
	cv::Mat img = cv::imread(path);
	cv::Mat imgGray;

	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
	
	cv::imshow("anurag", img);
	cv::imshow("anuragGray", imgGray);

	return imgGray;
}
cv::Mat Blur(std::string path, int x, int y, int sigmaX, int sigmaY)
{
	cv::Mat img = cv::imread(path);
	cv::Mat imgBlur;

	cv::GaussianBlur(img, imgBlur, cv::Size(x, y), sigmaX, sigmaY);
	cv::imshow("anurag", img);
	cv::imshow("anuragBlurr", imgBlur);
	
	return imgBlur;

}

cv::Mat getEdges(std::string path, double threshHold1,double threshHold2)
{
	cv::Mat img = cv::imread(path);
	cv::Mat edged;
	cv::Canny(img, edged, threshHold1, threshHold2);
	cv::imshow("Edges", edged);


	return edged;
}
cv::Mat getEdges(cv::Mat img, double threshHold1, double threshHold2)
{
	cv::Mat edged;
	cv::Canny(img, edged, threshHold1, threshHold2);
	

	return edged;
}
cv::Mat Dilation(cv::Mat img, int x, int y)
{
	cv::Mat imgDil;
	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	cv::dilate(img, imgDil, kernel);

	return imgDil;

}

cv::Mat Erode(cv::Mat img, int x, int y)
{
	cv::Mat imgEroded;
	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	cv::dilate(img, imgEroded, kernel);

	return imgEroded;

}