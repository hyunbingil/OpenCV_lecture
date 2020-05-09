#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main_1() {
	int x, y, w, h;
	w = 400;
	h = 300;
	Mat image1(h, w, CV_8U, Scalar(255));
	string szTitle = "창 제어";
	namedWindow(szTitle, WINDOW_NORMAL);
	// WINDOW_NORMAL 옵션은 크기 재조정 가능. => 그래서 밑에서 resize할 경우 이미지가 window 창에 맞춰서 커진다.
	// 하지만, WINDOW_AUTOSIZE 옵션을 사용할 경우, 이미지는 그대로, window창만 커진다.
	imshow(szTitle, image1);
	x = 100;
	y = 100;

	for (int i = 0; i < 10; i++) {
		moveWindow(szTitle, x, y);
		resizeWindow(szTitle, w, h);
		waitKey();
		x = x + 20;
		w = w + 20;
	}
	waitKey();
	return 0;
}