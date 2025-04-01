int my_strlen(char *str) {
    int length = 0;

    while (str[length]) {
        length++;
    }

    return length;
}