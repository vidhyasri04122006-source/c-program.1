mobile data recharge drain detector
input:10 
4
2 3 4 2
output:remaining data:1
successful days:3

#include<stdio.h>
int main(){
    int n,i,total_data,count_usage_days=0,usage;
    scanf("%d",&total_data);
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&usage);
        
        
        if(total_data>=usage){
            total_data-=usage;
            count_usage_days++;
        }else{
            break;
        }
    }
        printf("remaining_data:%d\n",total_data);
        printf("successful_days:%d", count_usage_days);
        
        return 0;
    }
