#include <stdio.h>
#include "excer.h"


int foo(int a){

  // 50

  return a+40;
  //mov eax,50
  //jump x02

  
}

int main(){

  int x=20;
  
  int result = foo(10);//x01
  
   

  //x02 = Mov [result], eax
  

  return 0;
}



