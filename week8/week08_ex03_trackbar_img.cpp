#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int x, y;
string szTitle = "Ã¢ Á¦¾î";
Mat image1;

void onChange(int value, void* userdata) {
	Mat* m = (Mat*)userdata;
	Mat m2 = *m - 130 + value;
	imshow(szTitle, m2);
}


int main() {
	int value = 128;
	image1 = imread("D:/OpenCV/IP/week7/week7/antman.jpg");

	namedWindow(szTitle, WINDOW_NORMAL);
	createTrackbar("¹à±â", szTitle, &value, 255, onChange, &image1);
	imshow(szTitle, image1);

	waitKey();
	return 0;
}