#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// Matx 클래스 살펴보기
int mainnnn() {
	Matx<int, 3, 3> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matx<float, 2, 3> m2(1, 2, 3, 4, 5, 6);
	Matx<double, 3, 5> m3(3, 4, 5, 7); // 앞쪽에만 들어가고 안들어가면 0으로 되어있다(Mat와는 다르다, Mat는 쓰레기값이 들어있음)

	// 간단 선언 방법! 작은 matrix일 경우에는 사용 많이하지만, 커지면 좀 힘들다 ㅠㅡㅠ
	Matx23d		m4(3, 4, 5, 6, 7, 8); // 2*3 배열
	Matx34d		m5(3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14);

	// 행렬 원소에 바로 접근하는 방법
	cout << m4(0, 0);

	system("pause");
	return 0;
}