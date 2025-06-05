#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
  int value;
  struct Node *next;

}Node;

typedef struct{

  Node head;
  Node tail;
  
}LinkedList;


void addTotheEnd(LinkedList *lin,int val){
  Node newNode={.value=val,.next=NULL};

  lin->head.next=&newNode;
}

int main(){
 

 Node Node1 = {.value = 10};
 Node Node2={.value=20};





  return 0;
}
