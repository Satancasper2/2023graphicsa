#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("image.jpg");
    cvShowImage("Week07",img);
    cvWaitKey(0);
}
