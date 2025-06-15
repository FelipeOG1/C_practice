#include <stdlib.h>

#include <stdio.h>



 typedef struct stack{

  int size;


  int top_value;


  int *arr;

  uint8_t currentPos;
  



}stack_t;



stack_t * init_struct(int value){


  stack_t *st = malloc(sizeof(stack_t));


  st->size = value;

  st->arr = malloc(value * sizeof(int));
  

  *st->arr  = 0;

  if (!st->arr){

    return NULL;
  }

    
   

   st->top_value = st->arr[0];

  st->currentPos = 0;

  return st;


   
}


void push(stack_t *stack){

  if(stack->currentPos + 1 == stack->size){

     int *tmp_realloc= realloc(stack->arr,(stack->size * sizeof(int))*2);

    if (!tmp_realloc){


      printf("fallo el realloc");

      exit(1);

      
    }

    stack->arr = tmp_realloc;

    stack->size *=2;

    






    
  }

  

}


int main(){
  
  stack_t * stack = init_struct(10);

   
  

  return 0;
}
