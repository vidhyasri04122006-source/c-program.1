fibo series
input:5
output:01123

#include <stdio.h>

int main() {
    int i,n,temp;
    int a=0,b=1;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d ",a);
        temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}