find max of two num using fun
input:10 20
output:20
--------------------------------
#include<stdio.h>
int largest(int a,int b){
    if(a>=b)
        return a;
    else
        return b;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",largest(a,b));
}