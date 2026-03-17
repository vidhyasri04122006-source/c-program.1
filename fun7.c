check prime num using fun
input:7
output:prime
------------------------------------------
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;  
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;  
        }
    }
    return 1; 
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num))
        printf("prime\n");
    else
        printf("not prime\n");

    return 0;
}
