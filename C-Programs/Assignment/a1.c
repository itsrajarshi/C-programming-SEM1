#include <stdio.h>
int main(void) {
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
  {
    printf("yes\n");
  }
  else
  {
    printf("no\n");
  }
  return 0;
}