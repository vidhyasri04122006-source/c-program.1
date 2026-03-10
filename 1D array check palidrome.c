check palindrome sensor data
input:5
1 2 3 2 1
output:yes
---------------------------
#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        if(arr[i]!=arr[n-i-1]){
    
            printf("no");
            return 0;
    }
}
    printf("yes");
    return 0;
}