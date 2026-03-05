find best performing days
input:6
16 17 4 3 5 2
output:17 5 2
----------------------------
#include <stdio.h>
int main()
{
   int i,n;
 
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int current_max=arr[n-1];
   int leader[n];
   int count=0;
   leader[count++]=current_max;
   
   for(i=n-2;i>=0;i--){
       if(arr[i]>current_max){
           current_max=arr[i];
           leader[count++]=current_max;
       }
   }
  for(i=count-1;i>=0;i--){
      printf("%d ",leader[i]);
  }
    return 0;
}