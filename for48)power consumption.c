power consumptoin spike detector
input:5
3 6 4 8 2
output:total units:23
spike hours:2

#include<stdio.h>
int main(){
    int n,i,total_power_usage=0,count_spike_hours=0,unit;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&unit);
        total_power_usage+=unit;
        
        if(unit>5){
            count_spike_hours++;
        }
    } 
    printf("total_unit:%d\n",total_power_usage);
    printf("spike_hours:%d",count_spike_hours);
    
    return 0;
}