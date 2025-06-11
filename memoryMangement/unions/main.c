#include "unions.h"
#include <stdio.h>

int main(){
    snake_ob s1 = createInteger(42);
    snake_ob s2 = createString("martin");

    format_object(s1); // Imprime: 42
    format_object(s2); // Imprime: martin


  




  return 0;
}
