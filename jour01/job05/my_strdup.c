#include "my_strlen.c" // From previous jobs
#include "my_strcpy.c" // From previous jobs

char *my_strdup(const char *src) {
    int len = my_strlen(src);
    char *copy = (char *)malloc((len + 1) * sizeof(char)); // len + 1 for character '\0'

    my_strcpy(copy, src);
    return copy;
}