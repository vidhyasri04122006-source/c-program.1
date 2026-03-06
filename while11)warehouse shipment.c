warehouse shipment delay detector
input:3
0 1 2
output:total_delay:3
delaydats:0

#include <stdio.h>
int main()
{
  int n;
  int total_delay=0;
  int delaydays=0;
  int hours;
  scanf("%d",&n);
  
  int i=0;
  while(i<n){
  scanf("%d",&hours);
  total_delay+=hours;
  
  if(hours>2){
      delaydays++;
  }
  i++;
  }
  printf("total_delay:%d\n",total_delay);
  printf("delaydays:%d",delaydays);
  
  return 0;
}
