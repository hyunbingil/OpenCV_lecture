#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int mainn() {
	Mat m1 = Mat::ones(300, 500, CV_8UC1); // ��� 1�� �ʱ�ȭ
	// Mat m1 = 255 * Mat::ones(300, 500, CV_8UC1); �ϸ� ������� ���´�.
	Mat m2 = Mat::zeros(300, 500, CV_8UC1); // ��� 0���� �ʱ�ȭ
	Mat m3 = Mat::eye(300, 300, CV_8UC1); // �밢������ 1, �������� 0���� �ʱ�ȭ
	/* cout << "M1: " << m1 << endl;
	cout << "M2: " << m2 << endl;
	cout << "M3: " << m3 << endl; */

	imshow("Mat", m1);

	waitKey(0);
	// system("pause");
	return 0;
}