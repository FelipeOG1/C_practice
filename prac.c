#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int capacity;
  int *arr;
  int *pointer;
} Vector;


Vector crearVector(int capa){
  Vector v;
  
  v.capacity=capa;
  v.arr=malloc (capa * sizeof(int));
  v.pointer = v.arr - 1;

  
  
  return v;

}

void pushBack(Vector *v,int value){
  int diff = v->pointer - v->arr +1;
 
  if (diff + 1>=v->capacity){
    printf("nase");
  }
  
  v->pointer++;

  printf("%p\n",v->pointer);
}



int main(){

  Vector v = crearVector(5);
    

  pushBack(&v,30);

  pushBack(&v,30);

  pushBack(&v,30);

  pushBack(&v,30);



  

  
  return 0;
}
