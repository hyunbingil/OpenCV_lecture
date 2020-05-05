#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main_01() {
	Mat m1 = (Mat_<uchar>(3, 4) << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	Range r(0, 2);
	Mat m2 = m1.rowRange(r); // 가상의 matrix
	m2.at<uchar>(0, 0) = 255; // m1 값도 같이 바뀐다.
	Size wholesize;
	Point ofs;
	m2.locateROI(wholesize, ofs);
	m2.adjustROI(-1, 0, 1, -1);
	cout << m2;
	system("pause");
	return 0;
}