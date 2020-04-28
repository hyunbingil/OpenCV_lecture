#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

// 벡터 클래스가 약간 배열같은 느낌이다.
int function()
{
	Vec <int, 2> v1(5, 12);
	Vec <double, 3> v2(40, 130.7, 125.6); // 3개짜리 만들어보자
	Vec2b v3(10, 10); // 양수인 숫자만 쓰겠다!(uchar), 영상을 읽어들일 때 많이 사용한다.
	Vec6f v4(40.f, 230.23f, 525.6f);
	Vec3i v5(200, 230, 250);

	Vec3d v6 = v2 + (Vec3d)v5; // 형 변환해서 넣어주기
	Vec2b v7 = (Vec2b)v1 + v3;
	Vec6f v8 = v4 * 20.0f;

	Point pt1 = v1 + (Vec2i)v7; // (Point)(5,12) + (15,22) = (20,34)
	Point3_<int>pt2 = (Point3_<int>)v2; // 포인터 형에 벡터를 넣으려고 해서 에러가 나기 때문에 형태 바꿔주기
										// 포인터 형태로 바꿔주면서 x,y,z 라는 개념이 생겼다.
	cout << "[v3] = " << v3 << endl;
	cout << "[v7] = " << v7 << endl;
	cout << "[v3 * v7] = " << v3.mul(v7) << endl;
	cout << "v8[0]" << v8[0] << endl;
	cout << "v8[1]" << v8[1] << endl;
	cout << "v8[2]" << v8[2] << endl;
	cout << "[v2] = " << v2 << endl;
	cout << "[pt2] = " << pt2 << endl;
	system("pause");
	return 0;
}