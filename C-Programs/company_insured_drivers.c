#include <stdio.h>

int main(void)
{
  char MS,sex;
  int age;
  printf( "Enter age, marital status (m/u), and sex (m/f): ");
  scanf("%d %c %c", &age, &MS, &sex);
  if ( ( MS == 'm' ) || ( ( MS == 'u' ) && ( sex == 'm' ) && ( age >= 35 ) )
     || ( ( MS == 'u' ) && ( sex == 'f' ) && ( age > 25 ) ) )  
    printf( "You are insured\n" );
  else
    printf( "You are not insured\n" );
  return 0;
}