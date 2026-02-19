fitness heart rate risk analyzer
input:3
100 110 120
output:max heart rats:120
count dangerous:0

#include<stdio.h>
int main(){
    int n,i,max_heart_rate=0,heart_rate,count_dangerous=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&heart_rate);
        max_heart_rate=heart_rate;
        
        if(max_heart_rate>140){
        count_dangerous++;
        }
    } 
    printf("max_heart_rate:%d\n",max_heart_rate);
    printf("count_dangerous:%d",count_dangerous);
    
    return 0;
}