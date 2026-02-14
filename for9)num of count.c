num of count
input:123
output:3

#include <stdio.h>

int main() {
    int n, count = 0, i;

    scanf("%d", &n);

    for(i = n; i >0; i = i / 10) {
        count++;
    }

    printf("%d", count);

    return 0;
}