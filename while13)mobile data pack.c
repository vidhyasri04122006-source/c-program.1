mobile data pack exhaustion
input:8
3
2 2 2
output:exhausted day:4
overused data:1

#include <stdio.h>
int main()
{
    int n;
    int datapack;
    int dailyuse;
    int overused=0;
    int exhaused_day=0,i=0;
    
    scanf("%d %d",&datapack,&n);
    while(i<n){
    scanf("%d",&dailyuse);
     datapack-=dailyuse;
     
     if(datapack<=0 && exhaused_day==0){
         exhaused_day=i+1;
             overused=-datapack;
             break;
        }
     i++;
     }
     if(exhaused_day==-1){
          printf("data pack nat exhausted\n");
     }else{
         printf("exhaused_day:%d\n",exhaused_day);
         printf("overused_data:%d\n",overused);
     }
    return 0;

}
    
    