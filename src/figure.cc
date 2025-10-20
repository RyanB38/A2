#include "figure.h"

Figure::Figure(CImg<unsigned char> &an_image, int startX, int startY):
    img(an_image), x(startX), y(startY), turtle(an_image, startX, startY, 0) {}
