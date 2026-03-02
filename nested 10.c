E
DE
CDE
BCDE
ABCDE
-------------------
#include <stdio.h>
int main()
{
  int i,j;
  
  for(i=4;i>=0;i--){
      for(j=i;j<=4;j++){
          printf("%c ",'A'+j);
      }
      printf("\n");
  }
  return 0;
}