#include <opencv3/opencv.hpp>
#include <stdint.h>

using namespace std;
using namespace cv;

#define FPS_SMOOTHING 0.9

int main(int argc, char** argv){
    VideoCapture cap(2);
    Mat frame;

    float fps = 0.0;
    double prev = clock(); 
    while (true){
        double now = (clock()/(double)CLOCKS_PER_SEC);
        fps = (fps*FPS_SMOOTHING + (1/(now - prev))*(1.0 - FPS_SMOOTHING));
        prev = now;

        printf("fps: %.1f\n", fps);

        if (cap.isOpened()){
            cap.read(frame);
        }
        imshow("asdf", frame);
        if (waitKey(2) == 27){
            break;
        }
    }
}