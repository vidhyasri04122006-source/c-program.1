online course dropour risk
uinput:6
5 0 2 0 0 4
output:inactiveweeks:3
risk_status:high

#include <stdio.h>
int main()
{
    int n;
    int hours; 
    int inactiveweeks=0;

    scanf("%d",&n);

    int i=0;
    while(i<n){
    scanf("%d",&hours);
     if(hours==0){
    inactiveweeks++;
     }
     i++;
    }
     printf("inactiveweeks:%d\n",inactiveweeks);
  if(inactiveweeks>=3){
      printf(" risk_status:high\n");
  }else{
      printf("risk_status:low\n");
  }
    return 0;
}