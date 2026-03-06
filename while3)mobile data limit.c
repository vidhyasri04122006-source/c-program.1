mobile data limit exhaustion cheaker
input:15
4
3 4 2 5
output:days used:4
remaining data:1

#include<stdio.h>
int main(){
    int n,totaldata;
    int days=0;
    int usage;
    int i=0;
    
    scanf("%d",&totaldata);
    scanf("%d",&n);
    
    while(i<n){
        scanf("%d",&usage);
        
        if(totaldata-usage<0){
            break;
        }
        totaldata-=usage;
        days++;
        i++;
    }
    printf("days_used:%d\n",days);
    printf("Remaining_data:%d",totaldata);
    
    return 0;
}
    