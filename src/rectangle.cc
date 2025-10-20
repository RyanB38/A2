#include "rectangle.h"

// constructs a standard 100 pxl square when no argument is passed
Rectangle::Rectangle(CImg<unsigned char> &an_image)
    : Figure(an_image), a(100), b(100) {}
// constructs a rectangle with side lengths a and b
Rectangle::Rectangle(int sideA, int sideB, CImg<unsigned char> &an_image)
    : Figure(an_image), a(sideA), b(sideB) {}
// draws a rectangle
void Rectangle::draw() {
    turtle.pd();
    for(int i = 0; i < 4; i++){
        if(i % 2 == 0){
            turtle.fd(a);
        } else {
            turtle.fd(b);
        }
        turtle.rt(90);
    }
    turtle.pu();
}

