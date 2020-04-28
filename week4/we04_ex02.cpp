#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int functionnn() {
	Mat			image(300, 500, CV_8UC1, Scalar(255)); // 가상의 공간(컴퓨터 메모리)에 이미지를 만듦. 300*500
	// CV_8UC1 : 8bit짜리, channel이 1개다.(명암만 표시하는 gray 이미지이다.-컬러이미지X.)
	// Scalar(255) : 배경을 255로 싹 밀어라(흰색으로 설정해라-검은색은 0으로 하면 된다.)

	Point2f		center(250, 150), pts[4]; // 일반변수, 배열(좌표가 4개 필요해서 크기가 4) 만들기
	Size2f		size(300, 100);
	int			angle = 20;
	RotatedRect	rot_rect(center, size, angle); // 회전 사각형(센터, 너비&높이, 회전각도)
	
	// 회전사각형을 둘러싸고 있는 직사각형.
	Rect		bound_rect = rot_rect.boundingRect();
	rectangle(image, bound_rect, Scalar(0), 1);
	circle(image, rot_rect.center, 1, Scalar(0), 2);
	// 1 = 반지름, 2 = 두께

	// 회전 사각형 만들기
	rot_rect.points(pts); // 포인터함수 사용(좌표 가져오기)
	for (int i = 0; i < 4; i++) {
		circle(image, pts[i], 4, Scalar(0), 1); // 좌표 찍기
		line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2); // 점과 선을 연결하기(i와 i+1)
		// 이때 3과 0을 연결하기 위해서 % 4를 이용해서 만들어주기
	}
	// rot_rect가 정의가 되어있지 않아 보여줄 수 없어서 자세하게 코드를 작성해야 하는데, 그게 이것!

	imshow("회전사각형", image);
	waitKey(0);
	return 0;
}

// line(image, 첫점, 끝점, Scalar(), 두께)
// Mat 클래스는 표에 가깝다. (3차원 matrix), 채널이 4개
// 종류 : 정수, 실수, unchar