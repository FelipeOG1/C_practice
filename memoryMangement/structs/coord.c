#include "coord.h"

struct Coordinate create_coordinate(int x_value, int y_value, int z_value){
  
  struct Coordinate c ={

    c.x = x_value,
    c.y= y_value,
    c.z = z_value
  };
  return c;
}
