password strength uppercase check
input:venkey@12
output:invalis
---------------------------------------
#include <stdio.h>

int main() {
    char password[100];
    int hasUpper = 0;
    scanf("%s", password);

    for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            hasUpper = 1;
            break;
        }
    }

    if (hasUpper) {
        printf("valid\n");
    } else {
        printf("invalid\n");
    }

    return 0;
}
