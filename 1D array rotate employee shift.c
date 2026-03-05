rotate empliyee shift schedule
input:5
1 2 3 4 5 
2
output:3 4 5 1 2
-----------------------------------
#include <stdio.h>
int main()
{
   int i,n,k;
   int newindex;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   scanf("%d",&k);
    for(i=0;i<n;i++){
        newindex=(i+k)%n;
        printf("%d ",arr[newindex]);
    }
    return 0;
}