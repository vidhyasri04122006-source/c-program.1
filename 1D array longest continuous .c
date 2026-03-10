longest continuous growth period
input:5
1 2 3 1 2
output:3
------------------------------------
#include <stdio.h>
int main()
{
    int n,i;
    int count=1,max=1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        if(arr[i]=arr[n-i-1]){
        scanf("%d",&arr[i]);
    }
    }
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count>max){
            max=count;
        }
    }
    printf("%d",max);
    return 0;
}