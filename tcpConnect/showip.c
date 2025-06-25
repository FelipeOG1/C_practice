#include <stdio.h>
#include <stdlib.h>
#include <string.h>     // Para memset
#include <arpa/inet.h>  // Para inet_pton
#include <netinet/in.h> // Para sockaddr_in
#include <sys/socket.h>
#include <netdb.h>
#include <time.h>
#define PORT 80
#define IPV4LEN 32
int main(int argc, char *argv[]) {
  //El puntero maestro es un puntero que se usa para liberar memoria luego, y el puntero p se usa para recorrer la lista enlazada;
  struct addrinfo hints, *res, *p;
  char buff[16];




  int response;

  if(argc!=2){

    fprintf(stderr,"No address info");

    return 1;
  }

  memset(&hints,0,sizeof(hints));

  hints.ai_socktype = SOCK_STREAM;

  hints.ai_family = AF_UNSPEC;
 

  if((response = getaddrinfo(argv[1],NULL,&hints,&res))!=0){


    fprintf(stderr,"Fallo el getaddrinfo en alguna parte %s",gai_strerror(response));

    return 1;
  }


  printf("%s",argv[1]);

  //Se inicializa el puntero que recorre la lista enlazada
  
  for(p = res;p !=NULL;p = p->ai_next){

    void *addr;
    char *ipver;


    if(p->ai_family == AF_INET){

        struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ai_addr;
        ipver = "ipv4";

        addr = &(ipv4->sin_addr);
        
        


    }else{

      struct sockaddr_in6 *ipv6 =(struct sockaddr_in6 *)p->ai_addr;

      ipver = "ipv6";


      addr = &(ipv6->sin6_addr);

    }

    inet_ntop(p->ai_family,addr,buff,sizeof(buff));
    

    printf("current ip version:%s current ip for domain %s:%s\n",ipver,argv[1],buff);


    
  }



  freeaddrinfo(res);




  
    
    
    return 0;
}
