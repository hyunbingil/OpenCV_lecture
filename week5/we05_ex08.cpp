#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	vector<Point> v1; // vector�� point�� ������ �̾����ִ� �����̴�.
	v1.push_back(Point(10, 20));
	v1.push_back(Point(20, 30));
	v1.push_back(Point(50, 60));

	vector<float> v2(3, 9.25);
	Size arr_size[] = { Size(2,2), Size(3,3), Size(4,4) }; // �迭�� ũ��3
	int arr_int[] = { 10,20,30,40,50 }; // �迭�� ũ��5

	vector <Size> v3(arr_size, arr_size + sizeof(arr_size) / sizeof(Size));
	vector <int> v4(arr_int + 2, arr_int + sizeof(arr_int));

	cout << "v1" << (Mat)v1 << endl;
	cout << "v2" << ((Mat)v2).reshape(1,1) << endl; // mat�� �޼ҵ� reshape.
	cout << "v3" << ((Mat)v3).reshape(1, 1) << endl;
	cout << "v4" << ((Mat)v4).reshape(1, 1) << endl;
	
	system("pause");
	return 0;
}