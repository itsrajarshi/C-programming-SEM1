#include <stdio.h>

int main(void)
{
  int N, i, sum= 0;
  printf("enter the value of N\n");
  scanf("%d", &N);
  for(i=1; i<=N; i++)
    {
      sum= sum + i;
    
    }
  printf("the sum of %d is %d", N, sum);
  return 0;
}