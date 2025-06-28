#include <stdio.h>
int main(void)
{
  int N, X, F = 1;
  printf("Enter a number: ");
  scanf("%d", &N);
  for(X = 1; X<= N; X++)
    {
      F*=X;
    }
  printf("factorial of %d = %d" , N, F);
  return 0;
}
  
// This program calculates the factorial of a given number N.
// It initializes a variable F to 1 and uses a for loop to multiply F by each