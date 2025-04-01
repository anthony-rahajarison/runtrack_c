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