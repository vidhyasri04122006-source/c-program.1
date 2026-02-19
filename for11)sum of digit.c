sum of digit
input:123
output:6

#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(;n>0;n=n/10){
    sum=sum+(n%10);
}
    printf("%d",sum);
    return 0;
}