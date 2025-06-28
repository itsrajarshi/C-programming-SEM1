#include <stdio.h>

int main(void) 
{
  int num,t1,t2,t3,i;
  t1=0;
  t2=1;
  t3=t1+t2;
  scanf("%d",&num);
  for(i=3;i<=num;i++)
    {
      printf("%d\n",t3);
      t1=t2;
      t2=t3;
      t3=t1+t2;
    }
  return 0;
}