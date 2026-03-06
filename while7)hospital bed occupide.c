hospital bed occupancy monitor
input:100
6
20 -30 -10 25 -5 40
final oocupiedbeds:60
critical hour count:0

#include <stdio.h>

int main()
{
    int n;
    int capacity;
    int occupiedbeds=0;
    int hours=0;
    int change;

scanf("%d %d",&capacity,&n);

int i=0;
while(i<n){
    scanf("%d",&change);
    occupiedbeds=occupiedbeds+change;
    
    if(occupiedbeds>capacity){
        occupiedbeds=capacity;
    }
    if (occupiedbeds<0){
        occupiedbeds=0;
    }
    
    if(occupiedbeds>(0.9*capacity)){
        hours++;
    }
    i++;
}
    printf("final occupiedbeds:%d\n",occupiedbeds);
    printf("critical_hour_count:%d",hours);

    return 0;
}