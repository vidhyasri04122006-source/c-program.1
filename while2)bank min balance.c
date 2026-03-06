bank min balance violation tracker
input:3
5000
-1000 -500 -700
output:final balance:2800
low balance days:0

#include<stdio.h>
int main(){
    int n,transaction;
    int initial_balance;
    int lowbalance_days=0;
    
   int i=0;
   scanf("%d",&n);
   scanf("%d",&initial_balance);
   while(i<n){
   scanf("%d",&transaction);
   initial_balance=initial_balance +transaction;
   
   if(initial_balance<2000){
       lowbalance_days++;
   }
   i++;
   }
   printf("Final_Balance:%d\n",initial_balance);
   printf("Lowbalance_Days:%d",lowbalance_days);
   
   return 0;
   }
   
    
