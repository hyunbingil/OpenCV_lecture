#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int mainnnnn() {
	Mat m1(3, 4, CV_32FC3); // 4byte�� 3��, �ȼ����� 12��, define���� ���ǵǾ� �ִ�.
	cout << m1.dims << endl; // �������ΰ�?
	cout << m1.rows << endl; // ��?
	cout << m1.cols << endl; // ��?
	cout << m1.size() << endl; // �� * ���ΰ�?
	cout << m1.total() << endl; // ��ü ������ ����
	cout << m1.elemSize() << endl; // �ϳ��� �ȼ��� ������ ������ ũ�Ⱑ ��� �Ǵ°�? CV_32FC3�� 4byte�� 3�� �̹Ƿ� 12���� ����.
	cout << m1.elemSize() << endl; // �� ä�δ� ������ ũ�Ⱑ ��� �Ǵ°�? CV_32FC3�� float�̱� ������ 4�� ����.

	cout << m1.type() << endl; // CV_32FC3�� �������ִ� �Լ�, cout << CV_32FC3 << endl;�� ���� ����.
	cout << m1.depth() << endl; // �ڷ����� �˷��ش�. float���̶� 5, cout << CV_32F << endl;�� ���� ����.
	cout << m1.channels() << endl; // CV_32FC3�� ä���� 3���� 3�� ���´�.

	cout << m1.step << endl; // �� ���� ��Ʈ ��. (16���� byte�� �� ���� �̷�����ִ�.) �� ĭ�� 4byte ������ column�� 4���� �����ϱ� �� ���� byte���� 16
	cout << m1.step1() << endl;// �� �ȼ��� byte ���ڸ� �˷��ش�. (step�� 4byte�� �������ش�!)
	return 0;
}