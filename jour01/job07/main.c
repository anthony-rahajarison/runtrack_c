#include <stdio.h>
#include <stdlib.h>
#include "trim.c"

int main() {
    char *str1 = "   ABCDEF    ";
    char *str2 = "\t  ABCDEF  \n";
    char *str3 = "ABCDEF";
    char *str4 = "    ";

    char *result1 = trim(str1);
    char *result2 = trim(str2);
    char *result3 = trim(str3);
    char *result4 = trim(str4);

    printf("Trimmed: \"%s\"\n", result1);
    printf("Trimmed: \"%s\"\n", result2);
    printf("Trimmed: \"%s\"\n", result3);
    printf("Trimmed: \"%s\"\n", result4);

    return 0;
}