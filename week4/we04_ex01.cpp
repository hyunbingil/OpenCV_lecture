#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// Scalar 클래스는? 하나의 픽셀값을 나타내기 위한 클래스이다.
// Scalar는 원래 4개를 가진다.(rgb와 투명도)
int functionn() {
	Scalar_<uchar>	red(0, 0, 255);
	Scalar_<int>	blue(255, 0, 0);
	Scalar_<double>	color1(500);
	Scalar_<float>	color2(100.f, 200.f, 125.9f);

	Vec3d			green(0, 0, 300.5);
	Scalar			green1 = color1 + (Scalar)green; // Scalar만 적으면 double형이 기본이다.
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
