#include "str.c"
#include <stdio.h>

// char **array_clone(char **strs) {
//     while (**strs) {
//         printf(**strs);
//         **strs++;
//     }
// }

int main() {
    char *greetings[3] = {"Hello", "Bonjour", "Ciao"};
    int i = 0;
    while (i < 3) {
        printf("%s\n", greetings[i]);
        i++;
    }
    return 0;
}