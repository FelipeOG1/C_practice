#include <stdio.h>
#include "tcp.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
 

int main(int args,char *argv[]){
  struct sockaddr_in sa;
  
  const char *p = "192.168.1.1";

  memset(&sa,0,sizeof(sa));

  sa.sin_port=10;

  

  printf("%hu",sa.sin_port);

  



  
  return 0;
}
