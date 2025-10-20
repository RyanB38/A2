#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"
#include "CImg.h"

class Rectangle : public Figure{
    private:
    // side lengths of rectangle a and b
    int a, b;
    public:
    // parameterized constructor that takes a cimg and draws a standard square
    Rectangle(CImg<unsigned char>& img);
    // parameterized constructor that take in a cimg and two side lengths a and b
    Rectangle(int a, int b, CImg<unsigned char> &an_image);
    // draw method for rectangle
    void draw();
};
#endif