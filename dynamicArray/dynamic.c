#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get(int i,int arr[]){

  return arr[i];
  
}

void set(int *arr,int value,int index,int **p){
  arr[index]=value;
    
  if (&arr[index]>*p){

    *p=&arr[index];
  }



  

}

int main(){

  int capacity=10;

  int arr[capacity];

  int *p=&arr[4];

  printf("%p\n",(void *)p);
 
  set(arr,30,5,&p);

  printf("%p",(void *)p);


  return 0;
}
