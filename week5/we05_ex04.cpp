#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

// matrix ���� ���ϰ� ���Ⱑ �����ϴ�.
int mainnnnnn() {
	Mat m1(2, 3, CV_8U, 2); // 2�� �ʱ�ȭ
	Mat m2(2, 3, CV_8U, Scalar(10)); // ���� ����� ���� �ٸ� �� ����. (10���� �ʱ�ȭ)
	Mat m3 = m1 + m2; // ��ü 12
	Mat m4 = m2 - 6; // ��ü 6
	Mat m5 = m1; // ��ü 2

	m5 = 100; // ��ü�� 100�� �ȴ�.
	// m5�� �ǵ帰�ǵ� m1�� ���� 100���� �ٲ��
	// m1�� m5�� �����Ѱ� �ƴϰ� ���� ���� ����Ű�� �����̴�.
	cout << m5 << endl;

	return 0;
}