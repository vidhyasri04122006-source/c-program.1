smary traffic signal congestion controller
input:5
10 12 15 18 20
output:congestion_minutes:0
longest congestion streak:0

#include <stdio.h>
int main() {
    int n; 
    int vehicle;
    int congestion_min=0;
    int longest_streak=0;
    int current_streak=0;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        scanf("%d",&vehicle);
        if(vehicle>20){
            congestion_min++;
            current_streak++;
            
            if(current_streak>longest_streak){
                longest_streak=current_streak;
            }
            }else{
                current_streak++;
            }
            i++;
        }
        printf("congestion_minute:%d\n",congestion_min);
        printf("longest_congestion_streak:%d",longest_streak);
        return 0;
    }
    
    
