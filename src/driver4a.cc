// tests only the triangle class
#include "rectangle.h"


using namespace cimg_library;

int main() {
    // create an image object with white (black) background
    CImg<unsigned char> myimg(800, 600, 1, 3, 255);

    // just constructor for square
    Rectangle rect(myimg);
    rect.draw();

    // a second triangle fig
    Rectangle rect2(100, 200, myimg);
    rect2.move(-200, -100);
    rect2.draw();

    // Display the image in a window
    CImgDisplay main_disp(myimg, "Driver 4a");

    // Keep the window open until the user closes it
    while (!main_disp.is_closed()) {
        main_disp.wait();
    }

    return 0;
}
