#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main_05() {
	Mat m = (Mat_<uchar>(2, 4) << 1, 2, 3, 4, 5, 6, 7, 8);
	cout << m << endl;
	m.resize(1); // 1�ุ �����.
	m.resize(3); // 3����� �ø���. (���� ����� ���� 3�࿡��) // m.resize(3, Scalar(50));�ϸ� �þ ���� 50�� ��.
	system("pause");
	return 0;
}