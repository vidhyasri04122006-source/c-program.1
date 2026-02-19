delivery delay risk system
input:3
5 10 15
output:total_delay:30
deliveries:0


#include<stdio.h>
int main(){
    int n,i,deliveries=0,delay_time,total_delay=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&delay_time);
       total_delay=total_delay+delay_time;
        
        if(delay_time>30){
            deliveries++;
        }
    }
    printf("total_delay:%d\n",total_delay);
    printf("deliveries:%d",deliveries);
}