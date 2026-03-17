fibonacci series using fun
input:5
output:0 1 1 2 3
-----------------------------
#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    
    fibonacci(num);

    return 0;
}
