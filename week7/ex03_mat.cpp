#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main_3() {
	Mat m1(3, 4, CV_8U, Scalar(0));
	Mat m2 = m1; // ���� ����
	m2.at<uchar>(1, 1) = 255; // m1�� ���� �ٲ�
	Mat m3 = m1.clone(); // �׳� ����
	m3.at<uchar>(1, 0) = 255; // m1�� �ٲ��� ����.
	
	Mat_<uchar> m_1(3, 4, 5);
	Mat_<uchar> m_2 = m_1; // ���� ����
	m_2(1, 1) = 255; // m1�� ���� �ٲ�
	// m_2.at<uchar>(1, 1) = 255;�� ����.

	Matx<uchar, 3, 4> mx1(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	Matx<uchar, 3, 4> mx2;
	mx2 = mx1; // �׳� ����(matx�� ���� ���簡 ����.)
	mx2(1, 1) = 255;
	cout << mx1 << endl;
	cout << mx2 << endl;
	system("pause");
	return 0;
}