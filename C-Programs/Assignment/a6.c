#include <stdio.h>
int hcf(int n1,int n2)
{
  if(n2 !=0)
    return hcf(n2,n1%n2);
  else
    return n1;
}

int main() {
int n1,n2,n3,n4;
  scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
  int temp = hcf(n1,n2);
  temp = hcf(temp,n3);
  temp = hcf(temp,n4);
  printf("The HCF is %d", temp);
  return 0;
}