#include <stdio.h>
void printfib(int n, int t1, int t2)
{
  if(t1 <= n)
  {
    printf("%d ",t1);
    printfib(n,t2,t1+t2);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printfib(n,0,1);

  return 0;
}