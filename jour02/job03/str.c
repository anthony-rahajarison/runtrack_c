#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, const char *src) {
    char *pointer = dest;

    while (*src) {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return pointer;
}

int my_strlen(char *str) {
    int length = 0;

    while (str[length]) {
        length++;
    }
    
    return length;
}

char *my_strdup(const char *src) {
    int len = my_strlen(src);
    char *copy = (char *)malloc((len + 1) * sizeof(char)); // len + 1 for character '\0'

    my_strcpy(copy, src);
    return copy;
}