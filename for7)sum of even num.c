even num add
input:10
output:30


#include <stdio.h>
int main() {
   int i,n;
   int sum=0;
   scanf("%d",&n);
   for(i=2;i<=n;i+=2){
       sum=sum+i;
   }
       printf("%d",sum);

    return 0;
}