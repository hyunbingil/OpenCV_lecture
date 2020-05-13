#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int x, y;
string szTitle = "â ����";

void onMouse(int event, int mx, int my, int flag, void* param) {
	// parameter �κ� ���� �Ȱ��� �����ֱ�
	// mx, my�� ���콺 Ŭ���� ��ġ
	Mat* img = (Mat*)param;
	switch (event) {
	case EVENT_LBUTTONDOWN:
		// ���� ���콺 Ŭ���ϸ� ���׶�� �׸���!
		circle(*img, Point(mx, my), 5, Scalar(0));
		imshow(szTitle, *img);
	}
}

int main() {
	Mat image1(300, 400, CV_8U, Scalar(255));
	namedWindow(szTitle, WINDOW_NORMAL);
	imshow(szTitle, image1);
	setMouseCallback(szTitle, onMouse, &image1);

	waitKey();
	return 0;
}
