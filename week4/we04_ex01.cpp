#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// Scalar Ŭ������? �ϳ��� �ȼ����� ��Ÿ���� ���� Ŭ�����̴�.
// Scalar�� ���� 4���� ������.(rgb�� ������)
int functionn() {
	Scalar_<uchar>	red(0, 0, 255);
	Scalar_<int>	blue(255, 0, 0);
	Scalar_<double>	color1(500);
	Scalar_<float>	color2(100.f, 200.f, 125.9f);

	Vec3d			green(0, 0, 300.5);
	Scalar			green1 = color1 + (Scalar)green; // Scalar�� ������ double���� �⺻�̴�.
	Scalar			green2 = color2 + (Scalar_<float>)green;

	cout << "blue = " << blue[0] << ", " << blue[1];
	cout << ", " << blue[1] << ", " << blue[2] << endl;
	cout << "red = " << red << endl;
	cout << "green = " << green << endl << endl;
	cout << "green1 = " << green1 << endl;
	cout << "green2 = " << green2 << endl;
	system("pause");
	return 0;
}