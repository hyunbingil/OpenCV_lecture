#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
int mainnn() {
	double	a = 32.12345678, b = 2.7;
	short	c = 400;
	float	d = 10.f, e = 11.f, f = 13.f;

	Mat_<int>	m1(2, 4); // int형인 Matrix, 초기화 안하면 이상한 값들이 들어간다.
	Mat_<uchar>	m2(3, 4, 100); // 초기화 값으로 100이 들어감, 최대값은 255이다.
	Mat_<short>	m3(2, 4, c);

	m1 << 1, 2, 3, 4, 5, 6; // m1에 값 넣어주기
	Mat m4 = (Mat_<double>(2, 3) << 1, 2, 3, 4, 5, 6);
	Mat m5 = (Mat_<float>(2, 3) << a, b, c, d, e, f);
	cout << m5 << endl;
	waitKey(0);
	system("pause");
	return 0;
}