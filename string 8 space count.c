space counter in delivery address
input:no 10 street
output:2
---------------------------------------
#include <stdio.h>

int main() {
    char str[200];
    int i, count = 0;
    scanf("%[^\n]", str);   

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {  
            count++;
        }
    }

    printf(" %d\n", count);
    return 0;
}
