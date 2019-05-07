// Defining class Point 
#include <iostream>

#pragma once
#ifndef POINT_H
#define POINT_H

class point{
 public:
  point (double, double);   // Point Constructor
  point(point&);    // Copy Constructor
  void operator=(point&&);  // Operator= function
  double getX();
  double getY();
  point operator+ (const point&);  // Operator+ function
  double x, y;
 private:
};

#endif

  
