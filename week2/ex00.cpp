#include <opencv2/opencv.hpp>
// ������� ����ϱ�(�ؿ� �Լ��� ����ϱ� ���ؼ�)

using namespace cv;
using namespace std;
// ������� ������ �ؿ� �ϳ��ϳ� ��������ؼ� ! ���⿡ �̸�!

int main() {
	Mat image = imread("myname.jpg", IMREAD_COLOR); // �̹��� �о����
	// image��� ������ �����Ѵ�.
	imshow("Display window", image); // ȭ�鿡 ����Ѵ�.
	waitKey(0); // Ű�� �Է��ϸ� �Ѿ��
	return 0;
}