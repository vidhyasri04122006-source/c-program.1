first occurrence search
input:hello,l
output:2
------------------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    char *pos;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    pos = strchr(str, ch);

    if (pos != NULL)
        printf("First occurrence of '%c' is at index: %ld\n", ch, pos - str);
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}
