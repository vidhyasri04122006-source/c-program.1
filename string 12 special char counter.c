special char counter in password
input:venket@123
output:1
-----------------------------------------
#include <stdio.h>

int main() {
    char str[100];
    int i, count = 0;
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
       
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9'))) {
            count++;
        }
    }

    printf(" %d\n", count);
    return 0;
}
