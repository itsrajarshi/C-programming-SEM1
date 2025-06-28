#include <stdio.h>
int hcf(int a, int b)
{
  if(b == 0)
  {
    return a;
  }
  else
  {
    return hcf(b,a % b);
  }
}


int main() {
  int n1,n2;
  scanf("%d %d", &n1, &n2);
  int result = hcf(n1,n2);
  printf("%d",result);
  return 0;
}