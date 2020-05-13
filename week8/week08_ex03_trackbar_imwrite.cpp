#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int x, y;
string szTitle = "창 제어";
Mat image1;
Mat m2;

void onChange(int value, void* userdata) {
	Mat* m = (Mat*)userdata;
	m2 = *m - 130 + value;
	imshow(szTitle, m2);
}


int main() {
	int value = 128;
	image1 = imread("C:/Users/길현빈/Desktop/컴네/TCP1.PNG", IMREAD_GRAYSCALE);

	namedWindow(szTitle, WINDOW_NORMAL);
	createTrackbar("밝기", szTitle, &value, 255, onChange, &image1);
	imshow(szTitle, image1);

	waitKey();
	imwrite("test.jpg", m2);
	return 0;
}