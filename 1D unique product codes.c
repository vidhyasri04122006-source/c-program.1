verify unique product codes
input:4
1 2 3 4 
output:yes
---------------------------
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isUnique = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                isUnique = 0;  
                break;
            }
        }
        if (!isUnique) break;
    }

    if (isUnique)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
