#include <stdio.h>
#include "my_strcmp.c"

int main() {
    printf("Comparing \"abc\" and \"abc\": %d\n", my_strcmp("abc", "abc")); // Same string
    printf("Comparing \"abc\" and \"abd\": %d\n", my_strcmp("abc", "abd")); // str1 < str2
    printf("Comparing \"abd\" and \"abc\": %d\n", my_strcmp("abd", "abc")); // str1 > str2

    return 0;
}