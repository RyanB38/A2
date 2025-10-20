// tests only the triangle class
#include "rectangle.h"
#include "triangle.h"

using namespace cimg_library;

int main() {
    // create an image object with white (black) background
    CImg<unsigned char> myimg(800, 600, 1, 3, 255);

    Triangle tri(50, 50, 60, myimg);
    Rectangle rect(200, 20, myimg);
    
    for (int x = -100; x <= 100; x += 25) {
      rect.move(x,x);
      rect.rotate(10);
      rect.draw();
    }

		for (int i = 0; i < 12; i++) {
			tri.move(-400, -300+i*50);
			tri.draw();
		}
		tri.rotate(180);
		for (int i = 1; i <= 12; i++) {
			tri.move(400, -300+i*50);
			tri.draw();
		}
 

    // Display the image in a window
    CImgDisplay main_disp(myimg, "Driver 5a");

    // Keep the window open until the user closes it
    while (!main_disp.is_closed()) {
        main_disp.wait();
    }

    return 0;
}
