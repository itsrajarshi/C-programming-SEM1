#include <stdio.h>

int main(void) 
{
  int i,j;
for(i=0; i<=5; i++)
  {
    for(j=i; j>=1; j--)
      {
    printf("*");
  }
  printf("\n");
  }
  return 0;
}