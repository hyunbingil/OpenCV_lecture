#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main() {
	// 배경
	Mat			img(1000, 1800, CV_8UC1, Scalar(255));

	// 사람 머리
	Point2f		person_head_point(250, 150);
	circle(img, person_head_point, 100, Scalar(0), 2);

	// 사람 몸통
	Point2f		person_body_point(200, 250);
	Size2f		size_body(100, 300);
	Rect	person_body(person_body_point, size_body);
	rectangle(img, person_body, Scalar(0), 2);

	// 사람 팔
	Point2f		arm_point[4], arm_point2[4];
	Size2f		size_arm(50, 250);
	Point2f		person_arms(140, 350);
	RotatedRect	person_arm(person_arms, size_arm, 20);
	person_arm.points(arm_point); // 포인터함수 사용(좌표 가져오기)
	for (int i = 0; i < 4; i++) {
		line(img, arm_point[i], arm_point[(i + 1) % 4], Scalar(0), 2);
		// 점과 선을 연결하기(i와 i+1)
		// 이때 3과 0을 연결하기 위해서 % 4를 이용해서 만들어주기
	}

	Point2f		person_arms2(360, 350);
	RotatedRect	person_arm2(person_arms2, size_arm, 160);
	person_arm2.points(arm_point2); // 포인터함수 사용(좌표 가져오기)
	for (int i = 0; i < 4; i++) {
		line(img, arm_point2[i], arm_point2[(i + 1) % 4], Scalar(0), 2);
		// 점과 선을 연결하기(i와 i+1)
		// 이때 3과 0을 연결하기 위해서 % 4를 이용해서 만들어주기
	}

	// 사람 다리
	Point2f		person_leg_point(200, 550);
	Point2f		person_leg_point2(250, 550);
	Size2f		leg_size(50, 100);
	Rect	person_leg(person_leg_point, leg_size);
	Rect	person_leg2(person_leg_point2, leg_size);
	rectangle(img, person_leg, Scalar(0), 2);
	rectangle(img, person_leg2, Scalar(0), 2);

	// 집 지붕
	Point2f		roof_point(600, 100), roof_point2(400, 300), roof_point3(800, 300);
	line(img, roof_point, roof_point2, Scalar(0), 2);
	line(img, roof_point2, roof_point3, Scalar(0), 2);
	line(img, roof_point3, roof_point, Scalar(0), 2);

	// 집
	Point2f		house_point(450, 300);
	Size2f		size_house(300, 300);
	Rect	house(house_point, size_house);
	rectangle(img, house, Scalar(0), 2);

	// 집 문
	Point2f		door_point(550, 450);
	Size2f		size_door(100, 150);
	Rect	door(door_point, size_door);
	rectangle(img, door, Scalar(0), 2);

	// 문손잡이
	Point2f		handle_point(630, 530);
	circle(img, handle_point, 3, Scalar(0), 2);

	// 집 굴뚝
	Point2f		chimney_point(700, 150);
	Size2f		size_chimney(50, 100);
	Rect	chimney(chimney_point, size_chimney);
	rectangle(img, chimney, Scalar(0), 2);

	// 나무
	Point2f		tree_point(1100, 100), tree_point2(900, 300), tree_point3(1300, 300);
	line(img, tree_point, tree_point2, Scalar(0), 2);
	line(img, tree_point2, tree_point3, Scalar(0), 2);
	line(img, tree_point3, tree_point, Scalar(0), 2);
	Point2f		tree_point4(1100, 300), tree_point5(900, 500), tree_point6(1300, 500);
	line(img, tree_point4, tree_point5, Scalar(0), 2);
	line(img, tree_point5, tree_point6, Scalar(0), 2);
	line(img, tree_point6, tree_point4, Scalar(0), 2);
	Point2f		tree_point7(1100, 500), tree_point8(900, 700), tree_point9(1300, 700);
	line(img, tree_point7, tree_point8, Scalar(0), 2);
	line(img, tree_point8, tree_point9, Scalar(0), 2);
	line(img, tree_point9, tree_point7, Scalar(0), 2);

	// 나무 기둥
	Point2f		pillar_point(1050, 700);
	Size2f		size_pillar(100, 200);
	Rect	pillar(pillar_point, size_pillar);
	rectangle(img, pillar, Scalar(0), 2);


	imshow("4주차 과제", img);
	waitKey(0);
	return 0;
}