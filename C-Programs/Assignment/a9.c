#include <stdio.h>
int reverse(int num)
{
  if(num != 0)
  {
  printf("%d",num%10);
  return reverse(num/10);
}
return 0;
}

int main() {
int num;
  scanf("%d", &num);
  printf("The reverse of %d is ",num);
  reverse(num);
  printf("\n");
  return 0;
}