#include "Sphere.h"
#include "ThreeDimensionalShape.h"
#include <iostream>

Sphere::Sphere(double r, double xPoint, double yPoint) : radius {r}, X {xPoint}, Y {yPoint} {
}


double Sphere::area() const {
  return 4*pi*radius*radius;
}


double Sphere::volume() const {
  return 4*pi*radius*radius*radius/3;
}


double Sphere::getR() const {return radius;}

double Sphere::getSL() const {return 0;}

double Sphere::getX() const {return X;}

double Sphere::getY() const {return Y;}


std::ostream& Sphere::print(std::ostream& os) const{
  os << "Sphere radius = " << radius << std::endl;
  os << "center --> (" << X << ", " << Y << ", " << Z << ")" << std::endl;
  os << "area of " << 4*pi*radius*radius << " & volume of " << 4*pi*radius*radius*radius/3 << std::endl;
  return os;
}


void Sphere::move( point newCenter ) const {
  std::cout << "newCenter of Sphere is: (" << newCenter.getX() << ", " << newCenter.getY() << ", " << Z << ")" <<std::endl;
}

