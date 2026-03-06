online shopping wallet balance moniter
input:2000
3
500 500 500
output:successful_purchase:3
final_balance:500
--------------------------------------------------
#include <stdio.h>
int main()
{
    int n,walletbalance;
    int amount;
    int successful_purchase=0;

    scanf("%d %d",&walletbalance,&n);
    int i=0;
    while(i<n){
        scanf("%d",&amount);
        if(walletbalance>=amount){
            walletbalance-=amount;
            successful_purchase++;
        }else{
            break;
    }
    i++;
}
printf("successful_purchase:%d\n",successful_purchase);
printf("final_balance:%d",walletbalance);
    return 0;
}