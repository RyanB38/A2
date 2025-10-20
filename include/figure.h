#ifndef FIGURE_H
#define FIGURE_H
#include "turtle.h"

class Figure {
    protected:
    // img to be drawn on
    CImg<unsigned char> &img;
    // position x and y
    int x, y;
    // direction figure will be drawn with
    double direction;
    // turtle class that is being used to draw the shapes
    Turtle turtle;
    public:
    // paramaterized constructor with default values of zero 
    Figure(CImg<unsigned char> &an_image, int startX=0, int startY=0);
    // move figure origin to new x and y coordinates
    void move(int newX, int newY);
    // rotate the direction the figure will be drawn in
    void rotate(double degrees);
};
#endif