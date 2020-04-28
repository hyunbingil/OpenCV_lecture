#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

// ���� Ŭ������ �ణ �迭���� �����̴�.
int function()
{
	Vec <int, 2> v1(5, 12);
	Vec <double, 3> v2(40, 130.7, 125.6); // 3��¥�� ������
	Vec2b v3(10, 10); // ����� ���ڸ� ���ڴ�!(uchar), ������ �о���� �� ���� ����Ѵ�.
	Vec6f v4(40.f, 230.23f, 525.6f);
	Vec3i v5(200, 230, 250);

	Vec3d v6 = v2 + (Vec3d)v5; // �� ��ȯ�ؼ� �־��ֱ�
	Vec2b v7 = (Vec2b)v1 + v3;
	Vec6f v8 = v4 * 20.0f;

	Point pt1 = v1 + (Vec2i)v7; // (Point)(5,12) + (15,22) = (20,34)
	Point3_<int>pt2 = (Point3_<int>)v2; // ������ ���� ���͸� �������� �ؼ� ������ ���� ������ ���� �ٲ��ֱ�
										// ������ ���·� �ٲ��ָ鼭 x,y,z ��� ������ �����.
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