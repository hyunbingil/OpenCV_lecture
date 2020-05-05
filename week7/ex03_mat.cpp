#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main_3() {
	Mat m1(3, 4, CV_8U, Scalar(0));
	Mat m2 = m1; // 참조 복사
	m2.at<uchar>(1, 1) = 255; // m1도 같이 바뀜
	Mat m3 = m1.clone(); // 그냥 복사
	m3.at<uchar>(1, 0) = 255; // m1은 바뀌지 않음.
	
	Mat_<uchar> m_1(3, 4, 5);
	Mat_<uchar> m_2 = m_1; // 참조 복사
	m_2(1, 1) = 255; // m1도 같이 바뀜
	// m_2.at<uchar>(1, 1) = 255;와 같다.

	Matx<uchar, 3, 4> mx1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	Matx<uchar, 3, 4> mx2;
	mx2 = mx1; // 그냥 복사(matx는 참조 복사가 없음.)
	mx2(1, 1) = 255;
	cout << mx1 << endl;
	cout << mx2 << endl;
	system("pause");
	return 0;
}