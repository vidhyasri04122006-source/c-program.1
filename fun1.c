calculate simple interest using fun
input:1000 5 2
output:100.00
-------------------------------------------------
#include <stdio.h>

float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100;
}
int main() {
    float principal, rate, time, si;
    scanf("%f", &principal);
    scanf("%f", &rate);
    scanf("%f", &time);

    si = simpleInterest(principal, rate, time);
    printf(" %.2f\n", si);

    return 0;
}
