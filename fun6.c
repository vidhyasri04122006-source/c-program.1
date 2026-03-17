factorial using fun
input:5
output:120
----------------------------------------
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, result;
    scanf("%d", &num);
    result = factorial(num);
    printf(" %d\n", result);

    return 0;
}
