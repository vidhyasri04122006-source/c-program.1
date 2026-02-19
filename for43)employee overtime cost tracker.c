employee overtime cost tracker
input:5
2 4 1 5 3
output:total overtime hours:15
overtime cost:3000
heavy overtime days:2

#include<stdio.h>
int main(){
   int  n,i,hours,totalhours=0,heavydays=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&hours);
       totalhours=totalhours+hours;
       if(hours>3){
           heavydays++;
       }
    }
int overtimecost=totalhours*200;

printf("total_overtime_hours:%d\n",totalhours);
printf("overtimecost:%d\n",overtimecost);
printf("total_overtime_days:%d",heavydays);
}