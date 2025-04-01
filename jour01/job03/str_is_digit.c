#include "char_is_digit.c"

int str_is_digit(char *str) {
    while (*str) {
        if (!char_is_digit(*str)) {
            return 0;
        }
        *str++;
    }
    return 1;
}