#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main_2() {
	Mat m1 = (Mat_<uchar>(3, 4) << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	Range r1(2, 3), r2(1, 3);
	Mat m2 = m1(r1, r2);
	cout << m2;
	system("pause");
	return 0;
}