#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int mainn() {
	Mat m1 = Mat::ones(300, 500, CV_8UC1); // 모두 1로 초기화
	// Mat m1 = 255 * Mat::ones(300, 500, CV_8UC1); 하면 흰색으로 나온다.
	Mat m2 = Mat::zeros(300, 500, CV_8UC1); // 모두 0으로 초기화
	Mat m3 = Mat::eye(300, 300, CV_8UC1); // 대각선으로 1, 나머지는 0으로 초기화
	/* cout << "M1: " << m1 << endl;
	cout << "M2: " << m2 << endl;
	cout << "M3: " << m3 << endl; */

	imshow("Mat", m1);

	waitKey(0);
	// system("pause");
	return 0;
}