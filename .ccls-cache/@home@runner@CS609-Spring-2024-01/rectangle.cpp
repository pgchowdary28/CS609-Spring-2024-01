#include "drawable.h"
#include "canvas.h"
#include "Rectangle.h"

Rectangle::Rectangle(int _x, int _y, int _w, int _h) {
  this->_x = _x;
  this->_y = _y;
  this->_w = _w;
  this->_h = _h;
}


void Rectangle::draw(Canvas* canvas) {
  //compute the other extremes
  int rx = _x + _w;
  int ly = _y + _h;

  //draw the shape
  canvas->line(_x, _y, rx, _y); //top line
  canvas->line(_x, ly, rx, ly); //bottom line
  canvas->line(_x, _y, rx, ly); //diagonal 1
  canvas->line(rx, _y, _x, ly); //diagonal 2
}