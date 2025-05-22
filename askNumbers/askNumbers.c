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

void MainMenu(){
  printf("1.Agregar Elemento a la lista\n");
  printf("2.Eliminar ultimo elemento\n");
  printf("3.Agregar Elemento a la lista\n");
  printf("4.Encontar algun elemento por su valor\n");
  printf("5.Encontrar multiples Elementos \n");
  printf("6.Encontrar valor mas alto\n");
}

int main(){
  int numbers[MAX_LEN]={0};
  int currentPos=0;
  int num=0;
  int bool=1;
  int respuesta=0;
 
  while(bool){
    
    MainMenu();
    scanf("%d",&respuesta);
    switch(respuesta){

      case 1:
        break;
      case 2:
        break;
        
      case 3:
        break;
        
      case 4:
        
        break;
      case 5:
        

      case 6:
        break;



      default:
        bool=0;
        break;
    }
    }


  return 0;
}


