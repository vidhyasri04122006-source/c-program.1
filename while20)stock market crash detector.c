stock market crash detector
input:6
500 480 460 450 470 449
output:crash day:4
total drops:4

#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int prev, curr;
    scanf("%d", &prev); 

    int i = 2;  
    int totalDrops = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;

    while (i <= n) {
        scanf("%d", &curr);

        if (curr < prev) {
            totalDrops++;
            consecutiveDrops++;
        } else {
            consecutiveDrops = 0;
        }

        if (consecutiveDrops == 3) {
            crashDay = i;
            break;
        }

        prev = curr;
        i++;
    }

    if (crashDay != -1) {
        printf("crash day:%d\n", crashDay);
        printf("total drops:%d\n", totalDrops);
    } else {
        printf("no crash detected\n");
        printf("total drops:%d\n", totalDrops);
    }

    return 0;
}
