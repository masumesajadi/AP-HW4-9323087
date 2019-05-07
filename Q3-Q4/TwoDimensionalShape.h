// TwoDimensionalShape.h Abstract class defining dimensions of a shape
#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H

#include "Shape.h"
#include "point.h"
#include <iostream>

class TwoDimensionalShape : public Shape{
 public:
  TwoDimensionalShape ();      // TwoDimensionalShape Constructor
  virtual double area() const override = 0;
  virtual double volume() const override = 0;
  virtual std::ostream& print(std::ostream& os) const override = 0;
  virtual void move( point ) const override = 0;
};

#endif







