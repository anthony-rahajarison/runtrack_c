#include "str_is_digit.c"
#include <stdio.h>

int main() {
    char str1[] = "1555A8";
    char str2[] = "155518";
    int is_digit1 = str_is_digit(str1);
    int is_digit2 = str_is_digit(str2);

    if (is_digit1 == 0) {
        printf("La chaine \"%s\" ne contient pas que des chiffres\n", str1);
    }
    else {
        printf("La chaine \"%s\" contient uniquement des chiffres\n", str1);
    }

    if (is_digit2 == 0) {
        printf("La chaine \"%s\" ne contient pas que des chiffres\n", str2);
    }
    else {
        printf("La chaine \"%s\" contient uniquement des chiffres\n", str2);
    }

    return 0;
}