#ifndef TURTLE_H
#define TURTLE_H

#include "CImg.h"
#include <cmath>

using namespace cimg_library;

class Turtle {
    // position
    int x,y;
    // orientation of turtle
    double orientation; 
    // implements a canvaas for using CImg files
    CImg<unsigned char> img;
    // boolean that says if the pen is up or down
    bool pen;
    
    public:
    //constructor 
    Turtle(CImg<unsigned char> &an_image, int startX, int startY, double startOrientation);
    // forward method 
    void fd(int length);
    // pen down method
    void pd();
    // pen up method
    void pu();
    // left turn method
    void lt(double degrees);
    // right turn method
    void rt(double degrees);
    // go to method
    void moveTo(int, int);
    // set orientation method
    void setOrientation(double degrees);




};
#endif
