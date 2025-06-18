#include <stdio.h>
#include "tcp.h"
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
 
#define PORT 2000
int main(int args,char *argv[]){
   
  struct sockaddr as;
  struct sockaddr_in si;

  si.sin_family = AF_INET;



  inet_pton(si.sin_family,"",(&si.sin_addr));
  
  memset(&si.sin_zero,0,sizeof(si.sin_zero));

  u_int32_t num = htonl(si.sin_addr.s_addr);

  printf("resultado hexadecimal 0x%X",num);
 
   


  return 0;
}
