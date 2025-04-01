#include "my_strlen.c"
#include <stdlib.h>

int is_whitespace(char c) {
    return (c == ' ' || c == '\t' || c =='\n');
}

char *trim(const char *str) {
    int start = 0;
    int end = my_strlen(str) - 1;

    // Starts after all spaces
    while (str[start] && is_whitespace(str[start])) {
        start++;
    }
    
    // Ends before all spaces
    while (end > start && is_whitespace(str[end])) {
        end--;
    }
    
    int len = end - start + 1;
    char *trimmed_str = (char *)malloc((end + 1) * sizeof(char));

    if (!trimmed_str) {
        return NULL;
    }

    for (int i = 0; i < len; i++ ) {
        trimmed_str[i] = str[start + i];
    }

    trimmed_str[len] = '\0';

    return trimmed_str;
}