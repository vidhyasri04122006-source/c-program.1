uppercase to lowercase convert
input:HELLO
output:hello
----------------------------------
#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%[^\n]", str);   

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   
        }
    }

    printf("%s\n", str);

    return 0;
}
