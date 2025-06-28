#include <stdio.h>
#include <math.h>
int main(void)
{
  int num,sum,temp,rem;
  scanf("%d",&num);
  temp=num;
  while (temp!=0)
    {
      rem = temp % 10;
      sum = sum + rem;
      temp = temp / 10;
    }
  if(num % temp == 0)
   printf("%d is Harshad's Number",num); 
  else
    printf("%d is not Harshad's Number",num);
return 0;
}