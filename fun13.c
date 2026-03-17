find power of a num using function
input:2 3 
output:8
------------------------------
#include <stdio.h>
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp, ans;
    scanf("%d %d", &base, &exp);
    ans = power(base, exp);
    printf("%d\n", ans);

    return 0;
}
