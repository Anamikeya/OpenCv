
#include"src/Chapter1.h"
#include"src/Chapter2.h"
#include"src/Chapter3.h"

std::string VidPath = "res/video/m1.mp4";
std::string imgPath = "res/Images/i1.jpg";

int main()
{
	image a = readingImage(imgPath);
	
	cv::imshow("actual", a);
	cv::imshow("resized", setSize(a, 0.5, 0.5));
	cv::waitKey(0);

}