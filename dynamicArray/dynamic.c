#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
int size;
int *arr;
int capacity;

int numAllocations;

}Vector;

Vector createVector(int capa){

  Vector v;

  v.size=0;

  v.arr=malloc(capa * sizeof(int));

  v.capacity = capa;
  

  return v;


}

void pushBack(Vector *v,int value){
 
  
  
  if (v->size + 1<= v->capacity){

    v->arr[v->size]=value;

    v->size++;
    

  }else{
    v->capacity = v->capacity *2;
    int *temp=realloc(v->arr,v->capacity * sizeof(int));
    if (temp){
      v->arr = temp;
      v->arr[v->size]=value;
      v->size++;
       
    }else{

      printf("No se logro realocar memoria en el heap\n");
      exit(1);
   }


    
  }



    printf("La cantidad de elementos agregados por el momento es de: %d y este arr tiene una capacidad de %d\n",v->size,v->capacity);   
} 


void MostrarArr(Vector *v){


  for (int i=0;i<v->size;i++){

    printf("%d ",v->arr[i]);



  }

}

void MostrarMenu(){

  printf("1.Agregar elemento al vector\n");

  printf("2.Ver todos los elementos del vector\n");

}

int main(){
  
  int capacidad = 0;
  int t=1;
  printf("Digite la capacidad del vector:");

  scanf("%d",&capacidad);
  
  
  Vector v = createVector(capacidad);

  while (t){
    int res=0;
    MostrarMenu();
    scanf("%d",&res);

    if (res==1){
      int value=0;

      printf("Digite el elemento a agregar:");

      scanf("%d",&value);

      pushBack(&v,value);

    }else if(res==2){

      MostrarArr(&v);

    }else{

     
      free(v.arr);
      

    }

  }
  
  return 0;
}
