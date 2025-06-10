#include <stdio.h>
#include "coord.h"



int main(){

  coordinate_t c=new_coord(10,20,30);

  coordinate_t scaled_c = scale_coordinate(3,c);
 printf("%d\n",scaled_c.x);

 
 return 0;
}
