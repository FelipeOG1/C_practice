# Apuntes de Sockets en C

## struct addrinfo

```c
struct addrinfo {
int ai_flags; // AI_PASSIVE, AI_CANONNAME, etc.
int ai_family; // AF_INET, AF_INET6, AF_UNSPEC
int ai_socktype; // SOCK_STREAM, SOCK_DGRAM
int ai_protocol; // use 0 for "any"
size_t ai_addrlen; // size of ai_addr in bytes
struct sockaddr *ai_addr; // struct sockaddr_in or _in6
char *ai_canonname; // full canonical hostname
struct addrinfo *ai_next; // linked list, next node
};

struct sockaddr {
unsigned short sa_family; // address family, AF_xxx
char sa_data[14]; // 14 bytes of protocol address in this case contains destination address and destinatio Portt

};


// (IPv4 only--see struct sockaddr_in6 for IPv6)
struct sockaddr_in {
short int sin_family; // Address family, AF_INET
unsigned short int sin_port; // Port number
struct in_addr sin_addr; // Internet address
unsigned char sin_zero[8]; // Same size as struct sockaddr
};


// (IPv6 only--see struct sockaddr_in and struct in_addr for IPv4)
struct sockaddr_in6 {
u_int16_t sin6_family; // address family, AF_INET6
u_int16_t sin6_port; // port number, Network Byte Order
u_int32_t sin6_flowinfo; // IPv6 flow information
struct in6_addr sin6_addr; // IPv6 address
u_int32_t sin6_scope_id; // Scope ID
};


struct in_addr{
  u_int32_t s_addr;
}

struct in6_addr {
unsigned char s6_addr[16]; // IPv6 address
};

//Este struct permite poder obtener el ss Family primero y luego hacer cast para que use el struct necesario, ya sea sockaddr_in6 o sockAddr_in

struct sockaddr_storage {
sa_family_t ss_family; // address family
// all this is padding, implementation specific, ignore it:
char __ss_pad1[_SS_PAD1SIZE];
int64_t __ss_align;
char __ss_pad2[_SS_PAD2SIZE];
};



int getaddrinfo(const char *node, // e.g. "www.example.com" or IP
const char *service, // e.g. "http" or port number'

const struct addrinfo *hints,//AI_FAMILY TIPO DE SOCKET,ETC.
struct addrinfo **res);//Puntero a lista enlazada.





