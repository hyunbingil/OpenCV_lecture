#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main_05() {
	Mat m = (Mat_<uchar>(2, 4) << 1, 2, 3, 4, 5, 6, 7, 8);
	cout << m << endl;
	m.resize(1); // 1행만 남긴다.
	m.resize(3); // 3행까지 늘린다. (값이 맘대로 들어간다 3행에는) // m.resize(3, Scalar(50));하면 늘어난 곳에 50이 들어감.
	system("pause");
	return 0;
}