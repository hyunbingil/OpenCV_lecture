#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void print_vectorInfo(string v_name, vector<int>v) {
	cout << "[" << v_name << "]= ";
	if (v.empty()) // vector가 비어있으면?
		cout << "Empty" << endl;
	else
		cout << ((Mat)v).reshape(1, 1) << endl;

	cout << ".size() = " << v.size() << endl;
}

int main_0() {
	int arr[] = { 10,20,30,40,50 };
	vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
	vector<int> v2;
	v2.reserve(100); // reserve를 미리 하면 메모리 공간을 미리 만들어둘 수 있다.
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	print_vectorInfo("v2", v2);
	cout << ".capacity() = " << v2.capacity() << endl;
	v2.insert(v2.begin() + 2, 100); // 원소삽입
	print_vectorInfo("v1 after insert", v2);
	cout << ".capacity() = " << v2.capacity() << endl; // 내부적으로 공간을 넓힘
	// capacity는 배열의 메모리를 미리 잡아두는 것. 6개의 원소가 들어있지만 메모리 재할당을 막기위해 7로 늘여줌.
	system("pause");
	return 0;
}