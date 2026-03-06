elevator overload warning system
input:500
5
80 90 100 120 150
output:passenger_allowed:4
overloaded:yes

#include<stdio.h>
int main(){
    int n,i=0;
    int weight; 
    int max_weight,overload=0;
    int passenger_allowed=0;
    int total_weight=0;
    scanf("%d %d",&max_weight,&n);
    
    while(i<n){
    scanf("%d",&weight);
    total_weight+=weight;
    
    if(total_weight<=max_weight){
        passenger_allowed++;
    }else{
        overload=1;
    }
    i++;
    }
    printf("passenger_allowed:%d\n",passenger_allowed);
    if(overload==1){
    printf("overload:yes\n");
    }else{
        printf("overload:no");
    }
    return 0;
    }