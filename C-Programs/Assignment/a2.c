#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  while(n > 1)
    {
      if(n % 2 != 0)
      {
        printf("No\n");
        return 0;
      }
      n /= 2;
    }    

if (n == 1)
{
  printf("Yes\n");
}
else
{
  printf("no\n");
}
return 0;
}