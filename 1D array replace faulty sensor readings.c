replace faulty sensor reading
input:4
-1 2 3 -9
output:0 2 3 0
--------------------------------------------
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);   
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;   
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
