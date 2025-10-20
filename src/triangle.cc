#include "triangle.h"
#include <cmath>
// creates a standard equaliteral triangle
Triangle::Triangle(CImg<unsigned char> &an_image)
    : Figure(an_image), a(100), b(100), pheta(60.0), standard(true) {}
// parameterized constructor that takes a side length a and b and the angle between them pheta
Triangle::Triangle(int sideA, int sideB, double angle, CImg<unsigned char> &an_image)
    : Figure(an_image), a(sideA), b(sideB), pheta(angle), standard(false) {}
// draws a triangle
void Triangle::draw(){
    // checks if it is a standard rectangle and then turns turtle the apropriate direction
    if(standard){
        turtle.rt(30);
    }
    turtle.pd();
    turtle.fd(a);
    turtle.rt(180 - pheta);
    turtle.fd(b);
    // moves back beginning and draws a line 
    // did it this way so i didnt have to do math lol
    turtle.moveTo(x, y);
    turtle.pu();
    // resets turtle to original direction
    turtle.setOrientation(direction);
} 
