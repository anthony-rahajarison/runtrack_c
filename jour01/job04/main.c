#include "my_strcpy.c"
#include <stdio.h>

int main() {
    char original[] = "ABCDEFG";
    char copy[10];

    my_strcpy(copy, original);

    printf("String d'origine : \"%s\"\n", original);
    printf("Copie de la String : \"%s\"", copy);
    return 0;
}