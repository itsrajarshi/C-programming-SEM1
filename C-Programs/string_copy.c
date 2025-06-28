#include <stdio.h>
#include<string.h>

int main(void) 
{
  char str1[30] = "sanket";
  char str2[30] = "sohel";
  
  strcpy(str1,str2);
  printf("s1 = %s", str1);
  printf("s2 = %s", str2);
}