#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

  char buff[256];
  int len=100;
  
  fgets(buff,len,stdin);

  
  char *token=strtok(buff," ");
   
  printf("%c",*token);
  
  

  token=strtok(NULL," ");
  
  printf("%s",token);
  
  




  

  
  return 0;
}
