#include <stdio.h>

int main(void) 
{
  int N;
  printf("enter the value of N: \n");
  scanf( "%d" , &N);
  for (int i = 1; i <= N; i++)
 printf("%d\n" , i);
  return 0;
}