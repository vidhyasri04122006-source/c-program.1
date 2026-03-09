username char counter
input:venkey12
output:8
----------------------------
#include <stdio.h>

int main() {
    char username[100];
    int count = 0;
    scanf("%s", username);

    for (int i = 0; username[i] != '\0'; i++) {
        count++;
    }

    printf(" %d\n", count);

    return 0;
}
