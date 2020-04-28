#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main_07() {
	double data[] = {
		1.1, 2.2, 3.3, 4.4,
		5.5, 6.6, 7.7, 8.8,
		9.9, 10, 11, 12 };
	Mat m1(3, 4, CV_64F, data);
	Mat m2 = m1.clone(); // 복사한거라서 m1에 무슨짓을 해도 m2 안바뀐다!!! 다른 배열을 가리키기 때문에~
	Mat m3, m4;
	m1.copyTo(m3);
	m1.convertTo(m4, CV_8U); // 소수점을 다 날리겠다!

	cout << m2 << endl;
	return 0;

}