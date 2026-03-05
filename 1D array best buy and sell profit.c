best buy and sell profit
input:4
9 8 7 6
output:-1
---------------------------
#include <stdio.h>
int main()
{
    int i,n;
    int min,profit;
    int max;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        min=arr[0];
        max=-1000;
        for(i=1;i<n;i++){
            profit=arr[i]-min;
            
            if(profit>max){
                max=profit;
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        printf("%d\n",max);
    return 0;
}