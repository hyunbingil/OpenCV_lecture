#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	string myTitle = "array";
	string myTitle2 = "repeact";
	Mat img = imread("D:/Programming_real/PC_seat/img/map.PNG");
	Mat img_2;
	imshow(myTitle, img);
	repeat(img, 1, 2, img_2); // img 여러개 출력(1,2)
	imshow(myTitle2, img_2);
	waitKey();
	return 0;
}