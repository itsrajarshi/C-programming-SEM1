#include <stdio.h>

int armstrong(int n)
{
  int temp = n;
  int rem, armstrong = 0;
  while(n != 0)
  {
    rem = n % 10;
    armstrong = armstrong + rem * rem * rem;
    n = n / 10;
  }
  return armstrong;
}

int main() 
{
  int n;
  scanf("%d", &n);
  int temp = armstrong(n);
  if(temp == n)
  {
    printf("The given %d Number is an armstrong number = %d", n, temp);
  }
  else
  {
    printf("The given %d Number is not an armstrong number = %d", n, temp);
  }
  return 0;
}

