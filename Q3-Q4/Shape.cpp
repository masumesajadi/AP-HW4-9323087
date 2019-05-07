#include <iostream>
#include "Shape.h"
#include "point.h"

Shape::Shape(){
}

std::ostream& operator<< (std::ostream& os, const Shape& s){
  return s.print( os );
}
