count num of digit
input:1234
output:4
----------------------------
#include <stdio.h>
int countDigits(int n) {
    int count = 0;
    if (n == 0) return 1;  
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int num, result;
    scanf("%d", &num);
    result = countDigits(num);
    printf("%d\n", result);

    return 0;
}
