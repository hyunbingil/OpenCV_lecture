#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void print_vectorInfo(string v_name, vector<int>v) {
	cout << "[" << v_name << "]= ";
	if (v.empty()) // vector�� ���������?
		cout << "Empty" << endl;
	else
		cout << ((Mat)v).reshape(1, 1) << endl;

	cout << ".size() = " << v.size() << endl;
}

int main_0() {
	int arr[] = { 10,20,30,40,50 };
	vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
	vector<int> v2;
	v2.reserve(100); // reserve�� �̸� �ϸ� �޸� ������ �̸� ������ �� �ִ�.
	v2.push_back(3);
	v2.push_back(4);
	v2.push_back(5);

	print_vectorInfo("v2", v2);
	cout << ".capacity() = " << v2.capacity() << endl;
	v2.insert(v2.begin() + 2, 100); // ���һ���
	print_vectorInfo("v1 after insert", v2);
	cout << ".capacity() = " << v2.capacity() << endl; // ���������� ������ ����
	// capacity�� �迭�� �޸𸮸� �̸� ��Ƶδ� ��. 6���� ���Ұ� ��������� �޸� ���Ҵ��� �������� 7�� �ÿ���.
	system("pause");
	return 0;
}