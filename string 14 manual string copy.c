manual string copy
input:hello
output:hello
-----------------------------------
#include <stdio.h>

int main() {
    char str[100], backup[100];
    int i;
    scanf("%s", str);


    for (i = 0; str[i] != '\0'; i++) {
        backup[i] = str[i];
    }
    backup[i] = '\0';   

    printf("%s\n", backup);

    return 0;
}
