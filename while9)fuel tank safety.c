fuel tank safety 
input:50
5
10 15 20 10 5
output:
completed trips:3
remaining fuel:5

#include <stdio.h>
int main()
{
    int n;
   int fuel;
   int completedtrips=0;
   int consumption;
   int i=0;
   scanf("%d %d",&fuel,&n);
   while(i<n){
       scanf("%d",&consumption);
       if(fuel>consumption){
           fuel-=consumption;
           completedtrips++;
           
       }else{
           break;
       }
       i++;
   }
   printf("completed_tripe:%d\n",completedtrips);
   printf("remaining_fuel:%d",fuel);
   
   return 0;
}