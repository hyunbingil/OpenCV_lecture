#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int x, y;
string szTitle = "창 제어";
Mat img_global;

void onMouse(int event, int mx, int my, int flag, void* param) {
	// parameter 부분 구성 똑같이 적어주기
	// mx, my는 마우스 클릭한 위치
	Point pt(mx, my);
	switch (event) {
	case EVENT_LBUTTONDOWN:
		// 왼쪽 마우스 클릭하면 동그라미 그리기!
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
