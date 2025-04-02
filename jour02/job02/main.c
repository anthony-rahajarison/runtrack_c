#include "swap.c"
#include <stdio.h>

int main () {
    int num1 = 10;
    int num2 = 15;

    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    swap(ptr1, ptr2);

    printf("NUM 1 : %d , NUM 2 : %d", num1, num2);

    return 1
}