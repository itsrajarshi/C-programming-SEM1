#include <stdio.h>
void decimaltobinary(int n)
{
  if(n>1)
  {
    decimaltobinary(n/2);
  }
  printf("%d",n%2);
}


int main() {
int decimalnumber;
  scanf("%d",&decimalnumber);
  if(decimalnumber<0)
  {
    printf("Negative numbers cannot be converted to binary using this program");
  }
  else
  {
    printf("The binary equivalent of %d is ",decimalnumber);
    decimaltobinary(decimalnumber);
    printf("\n");
  }
  return 0;
}