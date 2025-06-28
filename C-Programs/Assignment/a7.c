#include <stdio.h>
long long int power(int base, int exponent)
{
  if(exponent == 0)
  {
    return 1;
  }
  else if(exponent > 0)
  {
    return base*power(base,exponent-1);
  }
  else
  {
    return 1 / (base*power(base,-exponent-1));
  }
}

int main()
{
  int base;
  int exponent;
  long long int result;
  scanf("%d %d",&base, &exponent);
  result = power(base,exponent);
  printf("%d^%d is %lld\n",base,exponent,result);
  return 0;
}