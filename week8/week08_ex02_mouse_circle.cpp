#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int x, y;
string szTitle = "â ����";
Mat img_global;

void onMouse(int event, int mx, int my, int flag, void* param) {
	// parameter �κ� ���� �Ȱ��� �����ֱ�
	// mx, my�� ���콺 Ŭ���� ��ġ
	Point pt(mx, my);
	switch (event) {
	case EVENT_LBUTTONDOWN:
		// ���� ���콺 Ŭ���ϸ� ���׶�� �׸���!
		circle(img_global, pt, 5, Scalar(0));
		imshow(szTitle, img_global);
	}
}

int main() {
	Mat image1(300, 400, CV_8U, Scalar(255));
	img_global = image1;
	namedWindow(szTitle, WINDOW_NORMAL);
	imshow(szTitle, image1);
	setMouseCallback(szTitle, onMouse, 0);

	waitKey();
	return 0;
}
