sum of digit using fun
input:5
output:15
------------------------------
#include <stdio.h>
int sumNatural(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int num, result;
    scanf("%d", &num);
    result = sumNatural(num);

    printf("%d\n", result);

    return 0;
}
