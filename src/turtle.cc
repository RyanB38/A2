#include "turtle.h"
#include <cmath>
// constant declarations
const double pi = 3.1415926535;
const int screenW = 800;
const int screenH = 600;
// inline function to convert degrees to radians
double radians(double degrees){
    double conv = degrees * pi / 180;
    double twoPi = 2 * pi;
    conv = std::fmod(conv, twoPi);
    // prevents rounding errors from giving negative angles
    if (conv < 0)
        conv += twoPi;
    return conv;
    
}

// default constructor
// in the initializer list i convert x and y to the screen coordinates used for turtle graphics
Turtle::Turtle(CImg<unsigned char>& an_image, int startX, int startY, double startOrientation)
    : img(an_image, true), x(startX + screenW / 2), y(startY + screenH / 2), orientation(radians(startOrientation + 90)), pen(true) {}
// forward method that take in some length and drawss a line on the screen
void Turtle::fd(int length){

    int newX, newY;
    // rounding to prevent errors with doubles
    // in order to move properly i had to subtract the y and assign cos to x and sin to y
    newX = std::round(x + length * std::cos(orientation));
    newY = std::round(y - length * std::sin(orientation));
    // makes the color white using rgb values
    unsigned char color[] = {255, 0, 0};
    if (pen){
        img.draw_line(x, y, newX, newY, color);
    }
    x = newX;
    y = newY;
}
// sets the pen to down
void Turtle::pd(){
    pen = true;
}
// sets the pen to up
void Turtle::pu(){
    pen = false;
}
// rotates the turtle left by some degrees
void Turtle:: lt(double degrees){
   orientation += radians(degrees);

}
// rotates the turtle right by some degrees
void Turtle::rt(double degrees){
    orientation -= radians(degrees);
}
// moves the turtle to some new x and y coordinates
void Turtle::moveTo(int newX, int newY){
    // convert to turtle coordinates
    newX = newX + img.width() / 2;
    newY = img.height() / 2 - newY;

    if (pen){
        unsigned char color[] = {255, 0, 0};
        img.draw_line(x, y, newX, newY, color);
    }
    x = newX;
    y = newY; 

}
// sets the orientation of the turtle to some degrees
void Turtle::setOrientation(double degrees){
    orientation = radians(degrees + 90);
}