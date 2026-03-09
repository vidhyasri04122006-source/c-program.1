constant counter in speech analysis
input:hello
output:3
---------------------------------------
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        // Check if character is alphabet
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            
            if (!(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                  str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')) {
                count++;
            }
        }
    }

    printf( %d\n", count);
    return 0;
}
