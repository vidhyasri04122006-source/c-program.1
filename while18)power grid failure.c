power grid failure chain anaiyzer
input:150
4
100 120 140 160
output:safe_hours:3
failure_count:1

#include <stdio.h>
int main()
{
    int n,capacity;
    int hours=0,load;
    int failurecount=0;

    scanf("%d %d",&capacity,&n);
    int i=0;
    while(i<n){
        scanf("%d",&load);
        
        if(load<=capacity){
            hours++;
        }else{
            failurecount++;
        }
        i++;
    }
    printf("safe_hours:%d\n",hours);
    printf("failure_count:%d",failurecount);
    
    return 0;
}