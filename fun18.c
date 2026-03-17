gcd of two num using fun
input:12 18
output:6
------------------------------
#include <stdio.h>

int gcd(int a, int b) {
    int result = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}

int main() {
    int num1, num2, result;
    
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("%d\n", result);

    return 0;
}
