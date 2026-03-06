credit card fraud burst detector
input:4
70000 80000 90000 10000
output:fraud triggered at attempt:3
high value transaction:4
----------------------------------------------
#include <stdio.h>
int main()
{
    int n;
    int amount,highvaluecount=0,consecutivecount=0;
    int fraudattempt=-1;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&amount);
        
        if(amount>=50000){
            highvaluecount++;
            consecutivecount++;
            
            if(consecutivecount==3 &&fraudattempt==-1){
                fraudattempt=i+1;
            }
        }else{
            consecutivecount=0;
        }
        i++;
    }
    if(fraudattempt!=-1){
        printf("fraud_triggere_at_attempt:%d\n",fraudattempt);
    }else{
        printf("fraud_triggere_at_attempt:not_triggered\n");
    }
printf("high-value_transactions:%d\n",highvaluecount);

return 0;
}