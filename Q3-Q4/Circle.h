// Defining class Circle
#ifndef CIRCLE_H
#define CIRCLE_H

#include "TwoDimensionalShape.h"
#include "point.h"
#include <iostream>

class Circle : public TwoDimensionalShape{
 public:
   Circle(double r, int xPoint, int yPoint);   // Circle Constructor
   virtual double area() const override;      // Overriding Pure virtual functions from abstract class
   virtual double volume() const override;
   virtual double getR() const override;
   virtual double getSL() const override;
   virtual double getX() const override;
   virtual double getY() const override;
   virtual void move( point ) const override;
 protected:
   double radius {}, SL {};
   int X {};
   int Y {};
   constexpr static double pi {3.14159265};
   virtual std::ostream& print (std::ostream& os) const override;
};

#endif
