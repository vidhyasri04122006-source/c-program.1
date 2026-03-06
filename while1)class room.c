class room noise violation detector
input:5
60 65 68 70 69
output:noise violations:0
longest violation streak:0
 
#include<stdio.h>
int main(){
    int n;
    int violations=0;
    int currentstreak=0;
    int longeststreak=0;
    
    scanf("%d",&n);
    int noise[n];
    int i=0;
    while(i<n){
        scanf("%d",&noise[i]);
    
     if(noise[i]>70){
         violations++;
         currentstreak++;
         
         if(currentstreak>longeststreak)
         longeststreak=currentstreak;
     }else{
     currentstreak=0;
    }
    i++;
}
printf("noise_violations:%d\n",violations);
printf("longest_violation_streak:%d",longeststreak);

return 0;
}