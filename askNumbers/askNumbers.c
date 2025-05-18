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


int main(){
  int numbers[MAX_LEN]={0};
  int currentPos=0;
  int num=0;
  for (int i=0;i<3;i++){
    scanf("%d",&num);
    addNumbers(numbers,&currentPos,num);  
  }

   for (int i=0;i<MAX_LEN;i++){
    printf("%d",numbers[i]);
    
  }

  

  return 0;
}


