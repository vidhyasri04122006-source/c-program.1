online order cancellation risk monitor
input:5
0 0 1 0 0
output:successful:1
cancelled:4
status:risk

#include<stdio.h>
int main(){
    int n,i=0;
    int order;
    int successful=0,cancelled=0;
    scanf("%d",&n);
    
    while(i<n){
        scanf("%d",&order);
        
        if(order==1){
            successful++;
        }
        else if(order==0){
            cancelled++;
        }
        i++;
    }
    
    printf("successful:%d\n",successful);
    printf("cancelled:%d\n",cancelled);
    
    if(cancelled>successful){
        printf("status:risk\n");
    }else{
        printf("status:safe");
    }
    return 0;
}