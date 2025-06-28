#include<stdio.h>
int main()
{
  int num,rem,i,fact,sum=0,temp;
  printf("Enter a Number:\n");
  scanf("%d",&num);
  temp=num;
  while(num!=0)
    {
      rem=num%10;
      printf("Rem=%d\n",rem);
      fact=1;
      for(i=1;i<=rem;i++)
        {
          fact=fact*i;
          printf("Fact=%d\t",fact);
          
        }
    sum=sum+fact;
    printf("Sum=%d\n",sum);
    num=num/10;
    
    }
  if(temp==sum)
  {
    printf("%d number you entered is Armstrong Number",temp);
  }
  else{
    printf("%d number you entered in Not Armstrong Number",temp);
  }
  return 0;
}