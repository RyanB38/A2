// tests only the triangle class
#include "triangle.h"


using namespace cimg_library;

int main() {
    // create an image object with black background
    CImg<unsigned char> myimg(800, 600, 1, 3, 255);

    // constructor for a flipped triangle
    Triangle tri2(200, 120, 220, myimg);
    for (int i=0; i<6; i++) {
      tri2.draw();
      tri2.rotate(60);
    }

    // Display the image in a window
    CImgDisplay main_disp(myimg, "Driver 3b");

    // Keep the window open until the user closes it
    while (!main_disp.is_closed()) {
        main_disp.wait();
    }

    return 0;
}
