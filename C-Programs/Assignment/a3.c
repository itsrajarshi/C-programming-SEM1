#include <stdio.h>
int main(void)
{
  int num, sum = 0;
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    num --;
  }
  for (int i = 1; i <= num; i += 2)
    {
      sum += i;
    }
  printf("%d", sum);
  return 0;
}