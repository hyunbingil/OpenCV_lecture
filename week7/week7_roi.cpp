#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat img = imread("D:/OpenCV/IP/week7/week7/antman.jpg", IMREAD_GRAYSCALE);
	Range r_row(50, 100), r_col(250, 300);
	Mat roi = img(r_row, r_col);
	roi.adjustROI(20, 10, 10, 10);
	for (int i = 0; i < roi.rows; i++) {
		for (int j = 0; j < roi.cols; j++) {
			roi.at<uchar>(i, j) = 0;
		}
	}
	imshow("image",img);
	waitKey();
	return 0;
}