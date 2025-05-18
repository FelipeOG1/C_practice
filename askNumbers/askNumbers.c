#include <stdio.h> 
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX_LEN 100


void AgregarNumero(int arr[],int number,int *currentPos){

  arr[*currentPos]=number;
  printf("%d",arr[*currentPos]);
  *currentPos++;
}

void MostrarMenuPrincipal(){
  printf("1.AgregarNumero\n");
  printf("2.EliminarNumero\n");
  printf("3.BuscarUnNumero\n");
  printf("4.MostrarTodosLosNumerosInsertadosPorElMomento\n");

}

void limpiarConsola(){
  system("clear");

}


int main(){
  int numbers[MAX_LEN]={0};
  int currentPos=0;
  int number=0;
  int v=1;
  int respuestaActual=0;
 
  while(v){

    MostrarMenuPrincipal();
    printf("Digite Una de las opciones disponibles:");
 
    scanf("%d",&respuestaActual);

    switch(respuestaActual){
      case 1:
        limpiarConsola();	     
        printf("Digite el numero que desea agregar");
        scanf("%d",&number);
        v=0
        
      case 2:
	EliminarNumero();
      case 3:
	BuscarNumero();
      case 4:
	MostrarNumeros();
	
    }

 

  }
return 0;
}

  






