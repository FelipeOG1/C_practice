#pragma once


struct Coordinate{
  int x;
  int y;
  int z;
  
};


struct Coordinate create_coordinate(int x,int y,int z);
struct Coordinate scale_coordinate(int factor);


