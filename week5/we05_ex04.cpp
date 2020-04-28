#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

// matrix 끼리 더하고 빼기가 가능하다.
int mainnnnnn() {
	Mat m1(2, 3, CV_8U, 2); // 2로 초기화
	Mat m2(2, 3, CV_8U, Scalar(10)); // 위의 방법과 별반 다른 것 없음. (10으로 초기화)
	Mat m3 = m1 + m2; // 전체 12
	Mat m4 = m2 - 6; // 전체 6
	Mat m5 = m1; // 전체 2

	m5 = 100; // 전체가 100이 된다.
	// m5만 건드린건데 m1도 같이 100으로 바뀐다
	// m1를 m5에 복사한게 아니고 같은 곳을 가리키기 때문이다.
	cout << m5 << endl;

	return 0;
}