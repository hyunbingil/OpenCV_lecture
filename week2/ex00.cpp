#include <opencv2/opencv.hpp>
// 헤더파일 사용하기(밑에 함수들 사용하기 위해서)

using namespace cv;
using namespace std;
// 사용하지 않으면 밑에 하나하나 적어줘야해서 ! 여기에 미리!

int main() {
	Mat image = imread("myname.jpg", IMREAD_COLOR); // 이미지 읽어오기
	// image라는 변수에 저장한다.
	imshow("Display window", image); // 화면에 출력한다.
	waitKey(0); // 키를 입력하면 넘어간다
	return 0;
}