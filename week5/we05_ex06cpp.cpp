#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// �Լ� ����ϱ�
void print_matInfo(string m_name, Mat m) {
	cout << "[" << m_name << "���]" << endl;
	cout << "ä�� �� = " << m.channels() << endl;
	cout << "��*�� = " << m.rows << " * " << m.cols << endl << endl;
}

int main_06() {
	Mat m1(2, 6, CV_8U);
	Mat m2 = m1.reshape(2);
	Mat m3 = m1.reshape(3, 2);

	print_matInfo("m1(2, 6)", m1);
	print_matInfo("m2 = m1_reshape(2)", m2);
	print_matInfo("m3 = m1.reshape(3, 2)", m3);

	m1.create(3, 5, CV_16S);
	print_matInfo("m1.create(3, 5, CV_16S)", m1);

	system("pause");
	return 0;

}