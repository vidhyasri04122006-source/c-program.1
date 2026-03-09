email username extractor 
input:venkey@12
output:venkey
----------------------------------
#include <stdio.h>

int main() {
    char email[100];
    int i = 0;

    printf("Enter email: ");
    scanf("%s", email);
    while (email[i] != '@' && email[i] != '\0') {
        printf("%c", email[i]);
        i++;
    }

    return 0;
}
