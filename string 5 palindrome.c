palindrome product code
input:madam
output:palindrome
-----------------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            printf("not palindrome\n");
            return 0; 
        }
    }

    printf("palindrome\n");
    return 0;
}
