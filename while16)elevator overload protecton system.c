elevator overload protection system
input:400
4
60 70 80 90
output:people entered:4
overload status:no

#include <stdio.h>
int main()
{
    int n;
    int weight;
    int max_weight=0;
    int total_weight=0;
    int count=0;
    
    scanf("%d %d",& max_weight,&n);
    int i=0;
    while(i<n){
        scanf("%d",&weight);
        
        if(total_weight+weight>max_weight){
            break;
        }
        total_weight+=weight;
        count++;
        i++;
    }
    printf("people_entered:%d\n",count);
    
    if(i<n){
        printf("overloaded status:yes");
    }else{
        printf("overloaded status:no");
    }
    
        return 0;
    }