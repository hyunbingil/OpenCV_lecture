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
	else if (event == EVENT_MOUSEMOVE) {
		int ymin = (y - 50);
		int ymax = (y + 50);
		if (ymin < 0) {
			ymin = 0;
			ymax = 100;
		}
		if (ymax > m->size().height) {
			ymax = m->size().height;
			ymin = ymax - 100;
		}

		int xmin = (x - 50);
		int xmax = (x + 50);
		if (xmin < 0) {
			xmin = 0;
			xmax = 100;
		}
		if (xmax > m->size().width) {
			xmax = m->size().width;
			xmin = xmax - 100;
		}

		Mat m2 = (*m)(Range(ymin, ymax), Range(xmin, xmax));
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