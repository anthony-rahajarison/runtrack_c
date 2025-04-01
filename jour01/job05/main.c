#include <stdio.h>
#include <stdlib.h>
#include "my_strdup.c"

int main() {
    char original[] = "ABCDEF";
    char *copy = my_strdup(original);

    printf("Original: %s\n", original);
    printf("Copie : %s\n", copy);
}