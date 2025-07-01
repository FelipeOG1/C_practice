#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>



#define LEN 16 


int main(int argc, char** argv){


    if(argc!=2){

        fprintf(stderr,"Solo se puede tener maximo de dos argumentos");
        
        return 1;
        
    }

    struct addrinfo hints, *res,*p;
    


    memset(&hints,0,sizeof(hints));

    char ipaddr [LEN];
    

    hints.ai_socktype = SOCK_DGRAM;

    hints.ai_family = AF_UNSPEC;
    
    int response = getaddrinfo(argv[1],NULL,&hints,&res);

    if (response!=0){

        fprintf(stderr,"Algo salio mal con getaddrinfo");
        return 2;
    }

    
    

    for(p=res;p!=NULL;p = p->ai_next){

        
        char *ip = "";
        void *addr;
        
        if(p->ai_family == AF_INET){
            struct sockaddr_in *mama = (struct sockaddr_in *)p->ai_addr;
            
            ip = "ipv4";
            addr = &(mama->sin_addr);
    
         
            
        }else{
            struct sockaddr_in6 *mama = (struct sockaddr_in6 *)p->ai_addr;
            
            addr = &(mama->sin6_addr);
            ip = "ipv6";

            
            
            
        }

        inet_ntop(p->ai_family,addr,ipaddr,sizeof(ipaddr));
        
        printf("la ip del dominio: %s tiene un valor de %s",argv[1],ipaddr);
    
            
    }

    freeaddrinfo(res);
    



    

    




    
    

    return 0;
}
