smart meter power surge
input:4
2 3 4 5
output:max usagr:5
surge hour:0


#include <stdio.h>

int main()
{
    int n;
    int powerusage;
    int max_use=0;
    int hours=0;
    
    scanf("%d",&n);
    int i=0;
    while(i<n){
    scanf("%d",powerusage);
     if(powerusage>max_use){
         max_use=powerusage;
        }
        if(powerusage>5){
         hours++;
        }
    i++;
    }
      printf("max_usage:%d\n",max_use);
      printf("surge_hours:%d",hours);

    return 0;
}
