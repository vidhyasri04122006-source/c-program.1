power of a num
input:2 3
output:8

#include<stdio.h>
int main(){
    int i,base,power;
    int result=1;
    scanf("%d %d",&base,&power);
    for(i=1;i<=power;i++){
        result=result*base;
    }
    printf("%d",result);

    return 0;
}