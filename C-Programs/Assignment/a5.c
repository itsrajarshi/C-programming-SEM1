#include <stdio.h>

int gcf(int a, int b)
{
  if(b == 0)
  {
    return a;
  }
  else
  {
    return gcf(b,a % b);
  }
}

int lcm(int a, int b)
{
  return(a*b)/gcf(a,b);
}

int main() {
int num1,num2;
  scanf("%d %d", &num1 ,&num2); 
  int result = lcm(num1,num2);
  printf("%d",result);
  return 0;
}