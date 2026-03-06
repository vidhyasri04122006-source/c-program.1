spacecraft fuel burn eme sys
input:100
4
20 30 40 25
outputr:eme stage:not occurred
fuel waste:0
----------------------------------------
#include <stdio.h>
int main()
{
    int n;
    int burn;
    int fuel,emergrncystage=0;
    int fuel_waste=0;
    scanf("%d %d",&fuel,&n);
    int i=0;
    while(i<n){
        scanf("%d",&burn);
        fuel-=burn;
        
        if(fuel<0 && emergrncystage==0){
            emergrncystage=i+1;
            fuel_waste=-fuel;
        }
        i++;
    }
    if(emergrncystage!=0){
        printf("emergrncystage:%d\n",emergrncystage);
        printf("fuel_waste:%d\n",fuel_waste);
    }else{
        printf("emergrncystage:not occurres\n");
        printf("fuel_wasted:0\n");
    }
    return 0;
}