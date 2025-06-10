#include "coord.h"

 coordinate_t new_coord(int x_value, int y_value, int z_value){
  
  struct Coordinate c ={

    c.x = x_value,
    c.y= y_value,
    c.z = z_value
  };
  return c;
}


 coordinate_t scale_coordinate(int factor,coordinate_t c){
  c.x *=factor;
  c.z *=factor;
  c.y *=factor;

  return c;
}






  


  

