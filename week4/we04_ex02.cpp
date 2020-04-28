#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int functionnn() {
	Mat			image(300, 500, CV_8UC1, Scalar(255)); // ������ ����(��ǻ�� �޸�)�� �̹����� ����. 300*500
	// CV_8UC1 : 8bit¥��, channel�� 1����.(��ϸ� ǥ���ϴ� gray �̹����̴�.-�÷��̹���X.)
	// Scalar(255) : ����� 255�� �� �о��(������� �����ض�-�������� 0���� �ϸ� �ȴ�.)

	Point2f		center(250, 150), pts[4]; // �Ϲݺ���, �迭(��ǥ�� 4�� �ʿ��ؼ� ũ�Ⱑ 4) �����
	Size2f		size(300, 100);
	int			angle = 20;
	RotatedRect	rot_rect(center, size, angle); // ȸ�� �簢��(����, �ʺ�&����, ȸ������)
	
	// ȸ���簢���� �ѷ��ΰ� �ִ� ���簢��.
	Rect		bound_rect = rot_rect.boundingRect();
	rectangle(image, bound_rect, Scalar(0), 1);
	circle(image, rot_rect.center, 1, Scalar(0), 2);
	// 1 = ������, 2 = �β�

	// ȸ�� �簢�� �����
	rot_rect.points(pts); // �������Լ� ���(��ǥ ��������)
	for (int i = 0; i < 4; i++) {
		circle(image, pts[i], 4, Scalar(0), 1); // ��ǥ ���
		line(image, pts[i], pts[(i + 1) % 4], Scalar(0), 2); // ���� ���� �����ϱ�(i�� i+1)
		// �̶� 3�� 0�� �����ϱ� ���ؼ� % 4�� �̿��ؼ� ������ֱ�
	}
	// rot_rect�� ���ǰ� �Ǿ����� �ʾ� ������ �� ��� �ڼ��ϰ� �ڵ带 �ۼ��ؾ� �ϴµ�, �װ� �̰�!

	imshow("ȸ���簢��", image);
	waitKey(0);
	return 0;
}

// line(image, ù��, ����, Scalar(), �β�)
// Mat Ŭ������ ǥ�� ������. (3���� matrix), ä���� 4��
// ���� : ����, �Ǽ�, unchar