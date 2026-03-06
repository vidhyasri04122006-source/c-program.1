cyber security login lock
input:6
1 0 0 0 1 0
output:lock triggered at attempt:4
total failed attempts:4
----------------------------------------------
#include <stdio.h>
int main()
{
    int n;
    int attempt;
    int current_streak=0;
    int lockattempt =-1;
    int fail=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&attempt);
        
        if(attempt==0){
            fail++;
            current_streak++;
            
            if(current_streak==3&&lockattempt==-1){
                lockattempt=i+1;
            }
        }else{
            current_streak++;
        }
        i++;
    }
    if(lockattempt!=-1)
    printf("lock_triggered_at_attempt:%d\n",lockattempt);
    else
    printf("lock_triggered_at_attempt:not_locked\n");
    
    printf("total_failed_attempts:%d\n",fail);
    return 0;
}

