classroom noise level monitor
input:3
50 60 65
output:maxnoise:65
noisy periods:0


#include<stdio.h>
int main(){
    int n,i,noise,maxnoise,noise_count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&noise);
        
        if(i==0){
            maxnoise=noise;
        }
        if(noise>maxnoise){
             maxnoise=noise;
        }
        if(noise>70){
            noise_count++;
        }
    }
    printf("maxnoise:%d\n",maxnoise);
    printf("noisy_periods:%d",noise_count);
}