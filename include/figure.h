#ifndef FIGURE_H
#define FIGURE_H
#include "turtle.h"

class Figure {
    protected:
    CImg<unsigned char> &img;
    int x;
    int y;
    Turtle turtle;
    public:
    Figure(CImg<unsigned char> &an_image, int startX=0, int startY=0);
    
};
#endif