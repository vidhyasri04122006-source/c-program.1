online exam cheating risk detector
input:3
10 20 30 
output:total risk:60
hifh risk session:0

#include<stdio.h>
int main(){
    int n,i,risk_score,total_risk=0,high_risk_count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&risk_score);
        total_risk+=risk_score;
        
        if(risk_score>50){
            high_risk_count++;
        }
    } 
    printf("total_risk:%d\n",total_risk);
    printf("high_risk_count:%d",high_risk_count);
    
    return 0;
}