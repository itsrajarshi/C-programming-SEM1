#include <stdio.h>

int reverse(int n)
{
  int rev = 0;
  while (n != 0)
  {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
  return rev;
}

int main()
{
  int n;
  scanf("%d", &n);
  int result = reverse(n);

  printf("Reversed number = %d", result);

  return 0;
}


