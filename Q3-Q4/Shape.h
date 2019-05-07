// Shape.h Abstract class defining a shape
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include "point.h"

class Shape{
 public:
  Shape ();    // Shape Constructor
  virtual double area() const = 0;    // Pure virtual function to calculate the area of a shape
  virtual double volume() const = 0;    // Pure virtual function to calculate the volume of a shape
  friend std::ostream& operator<< (std::ostream&, const Shape&);    // Operator<< function
  virtual std::ostream& print(std::ostream& os) const = 0;      // Pure virtual print function
  virtual double getR() const = 0;
  virtual double getSL() const = 0;
  virtual double getX() const = 0;
  virtual double getY() const = 0;
  virtual void move( point ) const = 0;   // Pure virtual function to move a shape to new center 
 protected:
   double radius {}, SL {};
   double X {};
   double Y {};
   double Z {};
};

#endif
