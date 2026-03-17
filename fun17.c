armstrong num using fun
input:153
output:armstrong
------------------------------
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) {
        int rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("armstrong\n");
    else
        printf("not armstrong\n");

    return 0;
}
