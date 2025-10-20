// tests only the triangle class
#include "triangle.h"


using namespace cimg_library;

int main() {
    // create an image object with black background (0 = black, 255 = white)
    CImg<unsigned char> myimg(800, 600, 1, 3, 0);

    // just constructor for equilateral triangle
    Triangle tri(myimg);
    tri.draw();

    // a second triangle fig
    Triangle tri2(200, 100, 60, myimg);
    tri2.draw();

    tri2.move(50, 1.732*50);
    tri2.draw();
    
    // Display the image in a window
    CImgDisplay main_disp(myimg, "Driver 3a");

    // Keep the window open until the user closes it
    while (!main_disp.is_closed()) {
        main_disp.wait();
    }

    return 0;
}
