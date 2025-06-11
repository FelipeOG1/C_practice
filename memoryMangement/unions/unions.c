#include "unions.h"
#include <stdio.h>

void format_object(snake_ob snake) {
    switch (snake.kind) {
        case INTEGER:
            printf("%d\n", snake.data.v_int);
            break;
        case STRING:
            printf("%s\n", snake.data.v_string);
            break;
    }
}


snake_ob createInteger(int i) {
    snake_ob s;
    s.kind = INTEGER;
    s.data.v_int = i;
    return s;
}

snake_ob createString(char *value) {
    snake_ob s;
    s.kind = STRING;
    s.data.v_string = value;
    return s;
}
