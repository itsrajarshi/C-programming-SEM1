#include <stdio.h>

int main(void) 
{
  int sub1, sub2, sub3, sub4, sub5;
  float  percentage;
  printf("Enter marks of 5 subjects: ");
  scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
  percentage = (sub1 + sub2 + sub3 + sub4 + sub5)*100/500;
  printf("Percentage: %f", percentage);
  if 
    (percentage >= 60)
    printf("\nFirst Division");
  else if 
    (percentage >50&&percentage<60)
    printf("\nSecond Division");
  else if
    (percentage >40&&percentage<50)
    printf("\nThird Division");
  else
    printf("\nFail");
  return 0;
}