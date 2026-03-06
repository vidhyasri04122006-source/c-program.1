bank ATM cash depletion tracker
input:10000
3
3000 3000 3000
output:successful_wuthdrawal:3
remaining_cash:1000

#include <stdio.h>
int main()
{
    int n;
    int ATMcash;
    int withdrawal;
    int successful=0;
    scanf("%d %d",&ATMcash,&n);
    int i=0;
    while(i<n){
        scanf("%d",&withdrawal);
        
        if(ATMcash>=withdrawal){
            ATMcash-=withdrawal;
            successful++;
        }else{
            break;
        }
        i++;
    }
printf("successful_withdrawal:%d\n",successful);
printf("remaining_cash:%d",ATMcash);
    return 0;
}