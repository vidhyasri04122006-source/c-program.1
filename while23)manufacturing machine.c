manufacturing machine breakdown predictor
input:5
50 55 60 65 70
output:breakdown at reading:not occurred
unsafe reading:0
--------------------------------------------
#include <stdio.h>
int main()
{
    int n;
    int vibration;
    int breakdown_num=0;
    int unsafe_count=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&vibration);
        if(vibration>70){
            unsafe_count++;
        }
        if(vibration>80 &&breakdown_num==0){
            breakdown_num =i+1;
        }
        i++;
    }
    if(breakdown_num!=0){
        printf("breakdown_at_reading:%d\n",breakdown_num);
    }
    printf("unsafe_readings:%d\n",unsafe_count);
    return 0;
}