#pragma once

typedef enum SnakeObKind {
    INTEGER,
    STRING
} snake_ob_kind;

typedef union SnakeObData {
    int v_int;
    char *v_string;
} snake_ob_data;

typedef struct SnakeOb {
    snake_ob_data data;
    snake_ob_kind kind;
} snake_ob;


void format_object(snake_ob snake);

snake_ob createInteger(int i);

snake_ob createString(char *name);
