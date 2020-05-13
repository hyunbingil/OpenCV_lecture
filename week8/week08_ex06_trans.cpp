#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	string myTitle = "array";
	string myTitle2 = "x_y_change";
	Mat img = imread("D:/Programming_real/PC_seat/img/map.PNG");
	Mat img_2;
	imshow(myTitle, img);
	transpose(img, img_2); // x축과 y축이 바뀜.
	imshow(myTitle2, img_2);
	waitKey();
	return 0;
}