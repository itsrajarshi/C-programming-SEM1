#include <stdio.h>
int add(int a, int b, int c, int d)
{
  return a + b + c + d;
}

int sub(int a, int b, int c, int d)
{
  return a - b - c - d;
}

int mul(int a, int b, int c, int d)
{
  return a * b * c * d;
}

int div(int a, int b, int c, int d)
{
  return a / b / c / d;
}

int mod(int a, int b, int c, int d)
{
  return a % b % c % d;
}



int main()
{
int a,b,c,d;
scanf("%d %d %d %d", &a, &b, &c, &d);
  
int result;
  result = add(a, b, c, d);
  printf("%d + %d + %d + %d = %d\n", a, b, c, d, result);

  result = sub(a, b, c, d);
  printf("%d - %d - %d - %d = %d\n", a, b, c, d, result);

  result = mul(a, b, c, d);
  printf("%d * %d * %d * %d= %d\n", a, b, c, d, result);

  result = div(a, b, c, d);
  printf("%d / %d / %d / %d = %d\n", a, b, c, d, result);

  result = mod(a, b, c, d);
  printf("%d %% %d %% %d %% %d = %d\n", a, b, c, d, result);

  return 0;
}
  

  
