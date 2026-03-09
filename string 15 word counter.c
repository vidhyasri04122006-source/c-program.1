word counter in text editor
input: i love c
output:3
----------------------------------
#include <stdio.h>

int main() {
    char str[100];
    int i, words = 0;
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) {
       
        if ((str[i] != ' ' && str[i] != '\n') &&
            (i == 0 || str[i-1] == ' ' || str[i-1] == '\n')) {
            words++;
        }
    }

    printf("%d\n", words);

    return 0;
}
