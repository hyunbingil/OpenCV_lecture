#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	string myTitle = "array";
	string myTitle2 = "flip_y";
	Mat img = imread("D:/Programming_real/PC_seat/img/map.PNG");
	Mat img_2;
	imshow(myTitle, img);
	flip(img, img_2, 0); // 상하로 뒤집힘
	// flip(img, img_2, 1); // 좌우로 뒤집힘
	// flip(img, img_2, -1); // 상하좌우 뒤집힘
	imshow(myTitle2, img_2);
	waitKey();
	return 0;
}