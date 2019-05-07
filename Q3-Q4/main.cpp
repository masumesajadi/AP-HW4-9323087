#include <iostream>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"
#include "point.h"
#include <iostream>
#include <cmath>

using std::cout;

int main()
{
  Square sqr( 12, 2, 2 );
  Sphere sph( 5, 1.5, 4.5 );
  Cube cub( 2.2 );
  Circle cir( 3.5, 6, 9 );
  Shape* ptr[4]{ &cir, &sqr, &sph, &cub };
  for ( int x = 0; x < 4; ++x )
    cout << *(ptr[ x ]) << '\n';

  point newCenter{0, 0}, center{0, 0};
  point point{2, 3};
  for( int x = 0; x < 4; ++x )
    {
      center = { (*ptr[ x ]).getX(), (*ptr[ x ]).getY() };
      newCenter = center + point ;
      (*ptr[ x ]).move( newCenter );
    }
  return 0;
}
