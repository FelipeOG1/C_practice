#include <stdio.h> 
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX_LEN 100



void addNumbers(int arr[],int *currentPos,int number){
  
  arr[*currentPos]=number;
  (*currentPos)++;
  
 
}

void MostrarElementosHastaUltimaPos(int arr[],int *currentPos){
  for (int i=0;i<(*currentPos);i++){
    printf("%d",arr[i]);
  }
  
}



int main(){
  int numbers[MAX_LEN]={0};
  int currentPos=0;
  int num=0;
  for (int i=0;i<3;i++){
    scanf("%d",&num);
    addNumbers(numbers,&currentPos,num);  
  }


  MostrarElementosHastaUltimaPos(numbers,&currentPos);
  

  

  

  return 0;
}


