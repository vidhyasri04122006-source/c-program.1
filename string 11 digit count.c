digit counter in product ids
input:venkey123
output:3
---------------------------------
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {   
            count++;
        }
    }

    printf(" %d\n", count);
    return 0;
}
