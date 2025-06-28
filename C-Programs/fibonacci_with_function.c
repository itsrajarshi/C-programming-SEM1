#include <stdio.h>

int fibnokey(int num)
{
  int t1, t2, t3;
  t1 = 0;
  t2 = 1;

  if (num >= 1) {
    printf("%d ", t1);
  }
  if (num >= 2) {
    printf("%d ", t2);
  }

  for (int i = 3; i <= num; i++)
  {
    t3 = t1 + t2;
    printf("%d ", t3);
    t1 = t2;
    t2 = t3;
  }
}

int main(void) 
{
  int n;
  scanf("%d", &n);
  fibnokey(n);
  return 0;
}
// This program calculates the Fibonacci sequence up to a given number of terms.
// It initializes the first two terms and then iteratively calculates the next terms by summing the