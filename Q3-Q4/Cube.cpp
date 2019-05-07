#include "Cube.h"
#include "ThreeDimensionalShape.h"
#include <iostream>

Cube::Cube(double sidelength) : SL {sidelength} {
}


double Cube::area() const {
  return 6*SL*SL;
}


double Cube::volume() const {
  return SL*SL*SL;
}


double Cube::getSL() const {return SL;}

double Cube::getR() const {return 0;}

double Cube::getX() const {return X;}

double Cube::getY() const {return Y;}


std::ostream& Cube::print(std::ostream& os) const{
  os << "Cube side length = " << SL << std::endl;
  os << "center --> (" << X << ", " << Y << ", " << Z << ")" << std::endl;
  os << "area of " << 6*SL*SL << " & volume of " << SL*SL*SL << std::endl;
  return os;
}


void Cube::move( point newCenter ) const {
  std::cout << "newCenter of Cube is: (" << newCenter.getX() << ", " <<  newCenter.getY() << ", " << Z << ")" <<std::endl;
}



