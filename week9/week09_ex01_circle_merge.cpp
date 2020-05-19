#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

string szNameWindow1 = "A"; // 윈도우 이름 설정
string szNameWindow2 = "B"; // 윈도우 이름 설정
float sx = 0, sy = 0, ex = 0, ey = 0;
int bMouseDown = 0;

Mat img_A; // 이미지를 저장할 변수
Mat img_B; // 이미지를 저장할 변수

void MyMerge();
void onMouse(int event, int mx, int my, int flag, void* param);

int main() {
	img_A = imread("A.jpg"); // 이미지 파일 읽기
	img_B = imread("B.jpg");
	resize(img_B, img_B, Size(img_A.cols, img_A.rows));

	imshow(szNameWindow1, img_A); // 결과 이미지 표시
	setMouseCallback(szNameWindow1, onMouse, &img_A);

	imshow(szNameWindow2, img_B); // 결과 이미지 표시
	waitKey(0);
}

void MyMerge() {
	bitwise_or(img_A, img_B, img_B);
}

void onMouse(int event, int mx, int my, int flag, void* param) {
	Mat img_tmp = img_A.clone();
	Mat mask = Mat::zeros(img_A.rows, img_A.cols, CV_8UC3);
	RotatedRect rect;

	switch (event) {
	case EVENT_LBUTTONDOWN:
		sx = (float)mx;
		sy = (float)my;
		bMouseDown = 1;
		break;
	case EVENT_MOUSEMOVE:
		if (bMouseDown == 1) {
			ex = (float)mx;
			ey = (float)my;
			rect = RotatedRect(Point2f((ex + sx) / 2, (sy + ey) / 2), Size(abs(ex - sx), abs(ey - sy)), 0);
			ellipse(img_tmp, rect, Scalar(0, 0, 0), 2);
			imshow(szNameWindow1, img_tmp);
		}
		break;
	case EVENT_LBUTTONUP:
		ex = (float)mx;
		ey = (float)my;
		rect = RotatedRect(Point2f((sx + ex) / 2, (sy + ey) / 2), Size(abs(ex - sx), abs(ey - sy)), 0);
		ellipse(mask, rect, Scalar(255, 255, 255), -1);
		// imshow("text", mask);
		bitwise_and(mask, img_A, img_A); // mask와 bitwise and 연산 처리한 후 img_A에 다시 저장
		bitwise_and(Scalar(255, 255, 255) - mask, img_B, img_B);
		imshow(szNameWindow1, img_A); // 원 이미지 화면 출력
		bMouseDown = 0;
		MyMerge(); // 두 이미지를 합성
		imshow(szNameWindow2, img_B); // 원 이미지 화면 출력
		break;

	}
}