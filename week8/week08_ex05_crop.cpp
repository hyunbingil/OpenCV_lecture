#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int x, y;
string szTitle = "창 제어";
string szTitle2 = "selection";
Mat image1;
Mat m2;

void onChange(int value, void* userdata) {
	Mat* m = (Mat*)userdata;
	m2 = *m - 130 + value;
	imshow(szTitle, m2);
}

void onMouse(int event, int x, int y, int flag, void* param) {
	Mat* m = (Mat*)param;
	if (event == EVENT_MOUSEWHEEL) {
		Rect rect = getWindowImageRect(szTitle);
		resizeWindow(szTitle, rect.width + 10, rect.height + 10);
	}
	else if (event == EVENT_LBUTTONDOWN) {
		int half_w = 50;
		Mat m2 = (*m)(Range(y - 50, y + 50), Range(x - 50, x + 50));
		imshow(szTitle2, m2);
	}
}

int main() {
	int value = 128;
	image1 = imread("C:/Users/길현빈/Desktop/컴네/TCP1.PNG", IMREAD_GRAYSCALE);

	namedWindow(szTitle, WINDOW_NORMAL);
	namedWindow(szTitle2, WINDOW_NORMAL);
	setMouseCallback(szTitle, onMouse, &image1);
	createTrackbar("밝기", szTitle, &value, 255, onChange, &image1);
	imshow(szTitle, image1);

	waitKey();
	return 0;
}

// 원래 range를 벗어나면 에러가 생김.