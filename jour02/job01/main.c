#include "divide.c"
#include <stdio.h>

int main() {
    int value = 20;
    divide(&value);
    printf("%d", value);
    return 0;
}