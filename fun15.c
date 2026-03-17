print table using fun
input:5
output:5*1=5.............
-------------------------------------
#include <stdio.h>
void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d*%d=%d\n", n, i, n * i);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printTable(num);

    return 0;
}
