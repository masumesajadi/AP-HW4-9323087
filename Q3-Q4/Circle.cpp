#include "Circle.h"
#include "TwoDimensionalShape.h"
#include "point.h"
#include <iostream>
#include <cmath>

Circle::Circle(double r, int xPoint, int yPoint) : radius {r}, X {xPoint}, Y {yPoint} {
  point center{ X, Y };
}


double Circle::area() const {
  return pi*radius*radius;
}


double Circle::volume() const {return 0;}

double Circle::getR() const {return radius;}

double Circle::getSL() const {return 0;}

double Circle::getX() const {return X;}

double Circle::getY() const {return Y;}


std::ostream& Circle::print(std::ostream& os) const{
  os << "Circle radius = " << radius << std::endl;
  os << "center --> (" << X << ", " << Y << ")" << std::endl;
  os << "area of " << pi*radius*radius << std::endl;
  return os;
}

void Circle::move( point newCenter ) const {
  std::cout << "newCenter of Circle is: (" << newCenter.getX() << ", " << newCenter.getY() << ")" <<std::endl;
}


