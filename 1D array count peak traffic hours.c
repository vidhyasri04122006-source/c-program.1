count peak traffic hours
input:5
1 2 3 4 5
output:0
-------------------------------
#include <stdio.h>
int main() {
    int n;
    int peakCount = 0;
    scanf("%d", &n);  

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            peakCount++;
        }
    }
    printf("%d\n", peakCount);
    return 0;
}
