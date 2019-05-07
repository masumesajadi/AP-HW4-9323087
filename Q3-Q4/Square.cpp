#include "Square.h"
#include "TwoDimensionalShape.h"
#include <iostream>

Square::Square(double sidelength, int xPoint, int yPoint) : SL {sidelength}, X {xPoint}, Y {yPoint} {
}


double Square::area() const {
  return SL*SL;
}


double Square::volume() const {return 0;}

double Square::getSL() const {return SL;}

double Square::getR() const {return 0;}

double Square::getX() const {return X;}

double Square::getY() const {return Y;}


std::ostream& Square::print(std::ostream& os) const{
  os << "Square side length = " << SL << std::endl;
  os << "center --> (" << X << ", " << Y << ")" << std::endl;
  os << "area of " << SL*SL << std::endl;
  return os;
}


void Square::move( point newCenter ) const {
  std::cout << "newCenter of Square is: (" << newCenter.getX() << ", " << newCenter.getY() << ")" << std::endl;
}


