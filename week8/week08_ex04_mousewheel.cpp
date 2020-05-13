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

void onMouse(int event, int x, int y, int flag, void* param) {
	if (event == EVENT_MOUSEWHEEL) {
		Rect rect = getWindowImageRect(szTitle);
		resizeWindow(szTitle, rect.width + 10, rect.height + 10);

	}
}

int main() {
	int value = 128;
	image1 = imread("C:/Users/길현빈/Desktop/컴네/TCP1.PNG", IMREAD_GRAYSCALE);

	namedWindow(szTitle, WINDOW_NORMAL);
	setMouseCallback(szTitle, onMouse);
	createTrackbar("밝기", szTitle, &value, 255, onChange, &image1);
	imshow(szTitle, image1);

	waitKey();
	return 0;
}