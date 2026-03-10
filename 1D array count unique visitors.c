count unique visitors
input:5
1 2 2 3 3 4
output:4
-----------------------------------
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);
    return 0;
}
