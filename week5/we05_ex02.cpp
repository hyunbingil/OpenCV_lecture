#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// Matx Ŭ���� ���캸��
int mainnnn() {
	Matx<int, 3, 3> m1(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matx<float, 2, 3> m2(1, 2, 3, 4, 5, 6);
	Matx<double, 3, 5> m3(3, 4, 5, 7); // ���ʿ��� ���� �ȵ��� 0���� �Ǿ��ִ�(Mat�ʹ� �ٸ���, Mat�� �����Ⱚ�� �������)

	// ���� ���� ���! ���� matrix�� ��쿡�� ��� ����������, Ŀ���� �� ����� �ФѤ�
	Matx23d		m4(3, 4, 5, 6, 7, 8); // 2*3 �迭
	Matx34d		m5(3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14);

	// ��� ���ҿ� �ٷ� �����ϴ� ���
	cout << m4(0, 0);

	system("pause");
	return 0;
}