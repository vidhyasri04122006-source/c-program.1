call center workload analyzer
input:3
20 25 30
output:total calls:75
overload hours:0

#include<stdio.h>
int main(){
    int n,i,total_calls=0,count_overload_hours=0,calls_per_hour;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&calls_per_hour);
        total_calls+=calls_per_hour;
        
        if(calls_per_hour>40){
            count_overload_hours++;
        }
    } 
    printf("total_calls:%d\n",total_calls);
    printf("overload_hours:%d",count_overload_hours);
    
    return 0;
}