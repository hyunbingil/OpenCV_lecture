#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int main() {
	vector<Mat> img_bgr_src;
	// 윈도우 이름 설정
	string szNameWindow1 = "source";
	vector<string> szNameWindows_bgr;
	szNameWindows_bgr.push_back("windows_B");
	szNameWindows_bgr.push_back("windows_G");
	szNameWindows_bgr.push_back("windows_R");

	Mat img_src = imread("1.jpg"); // 이미지 파일 읽기
	split(img_src, img_bgr_src); // 3개 채널을 3개의 Mat로 분리
	
	imshow(szNameWindow1, img_src); // 원본 이미지 출력
	for(int i=0; i<3; i++)
		imshow(szNameWindows_bgr[i], img_bgr_src[i]);

	waitKey(0);
	return 0;
}