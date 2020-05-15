#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main() {
	// 원본 이미지 읽어와서 표시
	string szNameWindow1 = "source"; // 윈도우 이름 설정
	Mat img_src = imread("1.jpg"); // 이미지 파일 읽기
	imshow(szNameWindow1, img_src); // 원본 이미지 출력

	// 채널별 분리하고 표시
	vector<Mat> img_bgr_src; // 변수 선언
	vector<string> szNameWindows_bgr; // 윈도우 이름 설정
	szNameWindows_bgr.push_back("windows_B"); // 윈도우 이름 설정
	szNameWindows_bgr.push_back("windows_G"); // 윈도우 이름 설정
	szNameWindows_bgr.push_back("windows_R"); // 윈도우 이름 설정

	split(img_src, img_bgr_src); // 3개 채널을 3개의 Mat로 분리
	for(int i=0; i<3; i++) // 3개 채널 이미지 화면 표시
		imshow(szNameWindows_bgr[i], img_bgr_src[i]);

	// 분리된 이미지를 컬러 영상으로 변경
	vector<Mat
	Mat img_black = Mat::zeros(img_src.rows, img_src.cols, CV_8UC1); // 흑백이니까 채널이 1(C1)
	

	waitKey(0);
	return 0;
}