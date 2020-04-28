#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int mainnnnn() {
	Mat m1(3, 4, CV_32FC3); // 4byte가 3개, 픽셀개수 12개, define으로 정의되어 있다.
	cout << m1.dims << endl; // 몇차원인가?
	cout << m1.rows << endl; // 행?
	cout << m1.cols << endl; // 열?
	cout << m1.size() << endl; // 몇 * 몇인가?
	cout << m1.total() << endl; // 전체 원소의 개수
	cout << m1.elemSize() << endl; // 하나의 픽셀이 가지는 정보의 크기가 어떻게 되는가? CV_32FC3가 4byte가 3개 이므로 12개가 나옴.
	cout << m1.elemSize() << endl; // 한 채널당 정보의 크기가 어떻게 되는가? CV_32FC3가 float이기 때문에 4가 나옴.

	cout << m1.type() << endl; // CV_32FC3를 리턴해주는 함수, cout << CV_32FC3 << endl;와 값이 같다.
	cout << m1.depth() << endl; // 자료형을 알려준다. float형이라서 5, cout << CV_32F << endl;과 값이 같다.
	cout << m1.channels() << endl; // CV_32FC3의 채널은 3개라서 3이 나온다.

	cout << m1.step << endl; // 한 행의 비트 수. (16개의 byte로 한 줄이 이루어져있다.) 한 칸이 4byte 옆으로 column이 4개가 있으니까 한 줄의 byte수는 16
	cout << m1.step1() << endl;// 한 픽셀의 byte 숫자를 알려준다. (step을 4byte로 나누어준다!)
	return 0;
}