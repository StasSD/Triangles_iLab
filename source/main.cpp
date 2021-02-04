#include <iostream>
#include "triangles.h"

/* TODO 
1) overload << operator for points
2) overload << operator for triangles 
3) maybe fix dumps and << operator 
4) split into modules: geometry, algorithm 
5) add module function to calculate length 
6) fix name resolution conflicts, fix VectorConversion test
7) maybe add unary - operator for vectors
8) add a little exception handling
9) add 0 to vector conversion DONE
10) add computing distances from plane to point DONE 
11) add parallel planes method
12) add 2d triangles intersection test
13) refactor plane::is_equal function DONE
14) Line-plane intersection, check if parallel  */

/* ASK
1) const qualifier in plane.get_normal(), how to fix properly (or const Plane&)
2) name resoulution conflicts
3) throw an exception in constructors when, for instance when point can't be computed in 
constructor because a plane and a line a parallel */
int main(int argc, char** argv) {

    return 0;
}