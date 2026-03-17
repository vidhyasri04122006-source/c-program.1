menu driven calculation using fun
input:10 5 +
output:15
---------------------------------------
#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divi(int a, int b) { return b != 0 ? a / b : 0; }

int main() {
    int num1, num2;
    char op;

    scanf("%d %d %c", &num1, &num2, &op);

    switch(op) {
        case '+':
            printf("%d\n", add(num1, num2));
            break;
        case '-':
            printf("%d\n", sub(num1, num2));
            break;
        case '*':
            printf("%d\n", mul(num1, num2));
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", divi(num1, num2));
            else
                printf("Division by zero error\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
