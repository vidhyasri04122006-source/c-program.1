loan eml default streak
input:5
1 1 1 1 1
output:longest default streak:0

#include <stdio.h>
int main()
{
    int n;
   int payment;
   int current_streak=0;
   int max_streak=0;
   
   scanf("%d",&n);
   
   int i=0;
   while(i<n){
       scanf("%d",&payment);
       
       if(payment==0){
           current_streak++;
           
           if(current_streak>max_streak){
               max_streak=current_streak;
           }
       }
        else{
            current_streak=0;
        }
           i++;
    }
       printf("longest_default_streak:%d\n",max_streak);
   
       return 0;
   }