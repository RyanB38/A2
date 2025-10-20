#include "figure.h"


// parameterized constructor that can take a starting positiona and CImg
Figure::Figure(CImg<unsigned char> &an_image, int startX, int startY):
    img(an_image), x(startX), y(startY), turtle(an_image, startX, startY, 0), direction(0) {}
// make sure to not draw moves the turtle and saves that same position to the figure object
void Figure::move(int newX, int newY) {
    turtle.pu();
    turtle.moveTo(newX, newY);
    x = newX;
    y = newY;
}
// rotates clockwise the turtle saves that same position to our figure and ensures that turtle
// is facing the same direction as figure
void Figure::rotate(double degrees) {
    turtle.rt(degrees);
    direction -= degrees;
    turtle.setOrientation(direction);
}
