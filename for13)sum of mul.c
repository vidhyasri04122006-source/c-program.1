sum of mul
input:3 10
output:18

#include<stdio.h>
int main(){
    int M,N,sum=0;
    scanf("%d %d",&M,&N);
    for( int i=M;i<=N;i++){
        if(i%M==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
   