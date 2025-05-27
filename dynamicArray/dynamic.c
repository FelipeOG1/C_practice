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

void pushBack(int *arr,int capacity,int value,int **p){
 
  int currentPos = *p - arr;

  if (currentPos>=capacity){
    printf("No se pueden agregar mas elementos luego de la posicion %d",currentPos-1);

    return;
  }

    *p = *p +1;

    **p = value;
}


int getElements(int *arr,int capa){
  int nums[capa];
  int j=0; 
  for (int i=0;i<capa;i++){
    
    if (arr[i] !=0){

      nums[j]=arr[i];

      j++;
      

    }
    
      
  }
  return nums;

}


int main(){

  int capacity=10;

  int arr[capacity];

  int *p=arr -1;


  


   

  return 0;
}
