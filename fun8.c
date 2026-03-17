reverse using fun
input:123
output:321
----------------------------
#include <stdio.h>
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int num, result;
    scanf("%d", &num);

    result = reverseNumber(num);

    printf("%d\n", result);

    return 0;
}
