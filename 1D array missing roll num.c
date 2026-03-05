find missing roll num
input:4
1 2 3
output:4
------------------------------
#include <stdio.h>
int main()
{
    int n,i;
    int expected_sum,actual_sum=0;
    int missing_num;
    scanf("%d",&n);
    int arr[n-1];
    expected_sum=(n*(n+1))/2;
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        actual_sum+=arr[i];
    }
    missing_num=expected_sum-actual_sum;
        printf("%d ",missing_num);
        
    

    return 0;
}