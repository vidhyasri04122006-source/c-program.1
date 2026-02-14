reverse
input:123
output:321

#include <stdio.h>

int main() {
    int n, reverse = 0, i;

    scanf("%d", &n);

    for(i = n; i > 0; i = i / 10) {
        reverse = reverse * 10 + (i % 10);
    }

    printf("%d", reverse);

    return 0;
}