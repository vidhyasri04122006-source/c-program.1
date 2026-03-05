remove duplicate id
input:5
11235
output:1235
---------------------------------
#include <stdio.h>
int main()
{
    int n,i,j;
    int duplicate_id=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        for(i=0;i<n;i++){
            duplicate_id=0;
            for(j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    duplicate_id=1;
                    break;
                }
            }
            if(duplicate_id==0){
                printf("%d ",arr[i]);
            }
        }
    

    return 0;
}