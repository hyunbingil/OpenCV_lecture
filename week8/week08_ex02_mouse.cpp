#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int x, y, w, h;
string szTitle = "â ����";

void onMouse(int event, int mx, int my, int flag, void* param) {
	// parameter �κ� ���� �Ȱ��� �����ֱ�
	// mx, my�� ���콺 Ŭ���� ��ġ
	switch (event) {
	case EVENT_LBUTTONDOWN: // ���콺 ���ʹ�ư ������ ��������
		x = x - 20;
		break;
	case EVENT_RBUTTONDOWN: // ���콺 �����ʹ�ư ������ ����������
		x = x + 20;
		break;
	}
	moveWindow(szTitle, x, y);
}

int main_3() {
	w = 400;
	h = 300;
	x = 100;
	y = 100;
	Mat image1(h, w, CV_8U, Scalar(255));
	namedWindow(szTitle, WINDOW_NORMAL);
	// WINDOW_NORMAL �ɼ��� ũ�� ������ ����. => �׷��� �ؿ��� resize�� ��� �̹����� window â�� ���缭 Ŀ����.
	// ������, WINDOW_AUTOSIZE �ɼ��� ����� ���, �̹����� �״��, windowâ�� Ŀ����.
	imshow(szTitle, image1);
	setMouseCallback(szTitle, onMouse, 0);

	moveWindow(szTitle, x, y);
	waitKey();
	return 0;
}
