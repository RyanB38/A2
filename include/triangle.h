#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "CImg.h"
#include "figure.h"

class Triangle : public Figure {
    private:
    // two side lengths a and b
    int a, b;
    // angle in degrees between a and b
    double pheta;
    // bool to check if triangle is standard or not
    bool standard;
    public:
    // parameterized constructor that take a cimg and draws an equilateral triangle
    Triangle(CImg<unsigned char> &an_image);
    // parameterized constructor that take ina cimg, two side lengths and the angle between them
    Triangle(int sideA, int sideB, double angle, CImg<unsigned char> &an_image);
    // draw method for a triangle
    void draw();
};
#endif
