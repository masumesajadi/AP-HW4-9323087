#include <iostream>
#include "point.h"
#include <cmath>

// Point Constructor
point::point( double x, double y ){
  this -> x = x;
  this -> y = y;
}

// Copy Constructor
point::point(point& a) {
  x = a.x;
  y = a.y;
}

double point::getX(){
  return x;
}

double point::getY(){
  return y;
}

// Operator+
point point::operator+(const point& p) {
  point sum {0, 0};
  sum.x = (x + p.x);
  sum.y = (y + p.y);
  return sum;
}

// Operator=
void point::operator=(point&& a) {
  this -> x = a.x;
  this -> y = a.y;
}

