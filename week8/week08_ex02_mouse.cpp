#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int x, y, w, h;
string szTitle = "창 제어";

void onMouse(int event, int mx, int my, int flag, void* param) {
	// parameter 부분 구성 똑같이 적어주기
	// mx, my는 마우스 클릭한 위치
	switch (event) {
	case EVENT_LBUTTONDOWN: // 마우스 왼쪽버튼 누르면 왼쪽으로
		x = x - 20;
		break;
	case EVENT_RBUTTONDOWN: // 마우스 오른쪽버튼 누르면 오른쪽으로
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
	// WINDOW_NORMAL 옵션은 크기 재조정 가능. => 그래서 밑에서 resize할 경우 이미지가 window 창에 맞춰서 커진다.
	// 하지만, WINDOW_AUTOSIZE 옵션을 사용할 경우, 이미지는 그대로, window창만 커진다.
	imshow(szTitle, image1);
	setMouseCallback(szTitle, onMouse, 0);

	moveWindow(szTitle, x, y);
	waitKey();
	return 0;
}
