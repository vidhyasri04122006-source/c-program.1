factory machine failure streak analyzer
input:7
1 0 0 1 0 0 0
output:longest_failer_streak:3

#include<stdio.h>
int main(){
    int n,i=0;
    int daily_status;
    int current_streak=0,max_streak=0;
    scanf("%d",&n);
    
    while(i<n){
        scanf("%d",&daily_status);
        
        if(daily_status==0){
            current_streak++;
            if(current_streak>max_streak){
                max_streak=current_streak;
            }
        }else{
            current_streak=0;
        }
        i++;
    }
    printf("longest_failer_streak:%d",max_streak);
}