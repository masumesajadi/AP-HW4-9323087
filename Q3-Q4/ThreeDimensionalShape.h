// ThreeDimensionalShape.h Abstract class defining dimensions of a shape
#ifndef THREEDIMENSIONALSHAPE_H
#define THREEDIMENSIONALSHAPE_H

#include "Shape.h"
#include <iostream>

class ThreeDimensionalShape : public Shape {
 public:
  ThreeDimensionalShape ();      // ThreeDimensionalShape Constructor
  virtual double area() const override = 0;
  virtual double volume() const override = 0;
  virtual std::ostream& print(std::ostream& os) const override = 0;
  virtual void move( point ) const override = 0;
};

#endif

