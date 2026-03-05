count student scoring a specific mark
input:4
70 80 90 100
75
output:0
-------------------------------
#include <stdio.h>
int main()
{
    int n,i;
    int x;
    int count=0;
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    scanf("%d",&x);
    for(i=0;i<n;i++){
    if(marks[i]==x){
        count++;
    }
    }
    printf("%d\n",count);
    return 0;
}
