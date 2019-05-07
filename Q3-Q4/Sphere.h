// Defining class Sphere
#ifndef SPHERE_H
#define SPHERE_H

#include "ThreeDimensionalShape.h"
#include <iostream>

class Sphere : public ThreeDimensionalShape{
 public:
   Sphere(double r, double xPoint, double yPoint);     // Sphere Constructor
   virtual double area() const override;        // Overriding Pure virtual functions from abstract class
   virtual double volume() const override;
   virtual double getR() const override;
   virtual double getSL() const override;
   virtual double getX() const override;
   virtual double getY() const override;
   virtual std::ostream& print (std::ostream& os) const override;
   virtual void move( point ) const override;
 protected:
   double radius {}, X {}, Y {}, Z {};
   constexpr static double pi {3.14159265};
};

#endif


