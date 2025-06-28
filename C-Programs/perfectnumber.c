#include <stdio.h>

int main(void)
{
int N, i, sum = 0;
printf("Enter the value of N: ");
scanf("%d", &N);
 for (i = 1; i < N; i++)
{
  if(N%i==0)
  {
    sum = sum + i;
  }
}
  if(N==sum)
    printf("The number is perfect");
  else
    printf("The number is not perfect");
  return 0;
}
    