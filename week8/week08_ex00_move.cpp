#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main_1() {
	int x, y, w, h;
	w = 400;
	h = 300;
	Mat image1(h, w, CV_8U, Scalar(255));
	string szTitle = "â ����";
	namedWindow(szTitle, WINDOW_NORMAL);
	// WINDOW_NORMAL �ɼ��� ũ�� ������ ����. => �׷��� �ؿ��� resize�� ��� �̹����� window â�� ���缭 Ŀ����.
	// ������, WINDOW_AUTOSIZE �ɼ��� ����� ���, �̹����� �״��, windowâ�� Ŀ����.
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