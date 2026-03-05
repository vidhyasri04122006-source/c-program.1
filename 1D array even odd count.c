even and odd count
input:4
1 2 3 4
output:even:2 odd:2
----------------------------
#include <stdio.h>
int main()
{
   int i,j,n;
   int count=0;
   int even=0,odd=0;
   scanf("%d",&n);
   int arr[i];
   for(i=0;i<n;i++){
       scanf("%d",&arr[i]);
       if(arr[i]%2==0){
           even++;
       }else{
           odd++;
       }
   }
printf("even:%d odd:%d\n",even,odd);
    return 0;
}