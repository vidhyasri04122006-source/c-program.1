warehouse capacity
input:100
4
30 40 50 10
output:remaining capacity:-20
overflow days:1


#include<stdio.h>
int main(){
    int n,i,capacity,count_days=0,received;
    scanf("%d %d",&capacity,&n);
    
    for(i=1;i<n;i++){
        scanf("%d",&received);
       capacity-=received;
        
        if(capacity<0){
            count_days++;
        }
    }
    printf("remaining_capacity:%d\n",capacity);
    printf("over_flow_days:%d",count_days);
    
    return 0;
}