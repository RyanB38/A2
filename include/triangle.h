#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "CImg.h"
#include "figure.h"

class Triangle : public Figure {
    private:
    int a, b;
    double pheta;
    public:
    Triangle(CImg<unsigned char> &an_image);
    Triangle(int sideA, int sideB, double angle, CImg<unsigned char> &an_image);
    void rotate(double degrees);
    void draw();
    void move(int newX, int newY);
};
#endif
