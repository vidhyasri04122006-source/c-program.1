verify sorted daily sales report
input:3
50 60 70
output:yes
---------------------------------
#include <stdio.h>
int main()
{
    int n,i;
    int sales[n];
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&sales[i]);
    }
    for(i=0;i<n-1;i++){
    if(sales[i]>sales[i+1]){
        printf("no");
        return 0;
    }
    }
        printf("yes");

    return 0;
}
