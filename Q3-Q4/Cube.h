// Defining class Cube
#ifndef CUBE_H
#define CUBE_H

#include "ThreeDimensionalShape.h"
#include <iostream>

class Cube : public ThreeDimensionalShape{
 public:
   Cube(double sidelength);    // Cube Constructor
   virtual double area() const override;      // Overriding Pure virtual functions from abstract class
   virtual double volume() const override;
   virtual double getR() const override;
   virtual double getSL() const override;
   virtual double getX() const override;
   virtual double getY() const override;
   virtual std::ostream& print (std::ostream& os) const override;
   virtual void move( point ) const override;
 protected:
   double SL {}, X {}, Y {}, Z{};
};

#endif


   
