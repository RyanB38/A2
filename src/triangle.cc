#include "triangle.h"
#include <cmath>
Triangle::Triangle(CImg<unsigned char> &an_image)
    : Figure(an_image), a(100), b(100), pheta(60.0) {}
Triangle::Triangle(int sideA, int sideB, double angle, CImg<unsigned char> &an_image)
    : Figure(an_image), a(sideA), b(sideB), pheta(angle) {}
void Triangle::draw(){
    turtle.pd();
    turtle.fd(a);
    turtle.lt(pheta);
    turtle.fd(b);
    turtle.moveTo(x, y);
    turtle.pu();
} 
void Triangle::rotate(double degrees){
    turtle.lt(degrees);
}
void Triangle::move(int newX, int newY){
    turtle.moveTo(x, y);
}