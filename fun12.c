check leap year
input:2024
output:not leap year
----------------------------
#include <stdio.h>
int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1; 
    else
        return 0; 
}

int main() {
    int year;
    scanf("%d", &year);

    if (isLeapYear(year))
        printf("leap year\n");
    else
        printf("not leap year\n");

    return 0;
}
