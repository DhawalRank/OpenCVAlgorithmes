#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
double alpha; /*< Simple contrast control */
int beta;  /*< Simple brightness control */
int main(int argc, char** argv){
	Mat image = imread(argv[1]);
	if(!image.data){
		printf("Invalid or no Image input.");
		return -1;
	}

}
