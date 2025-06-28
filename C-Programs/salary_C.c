#include <stdio.h>

int main(void)
{
  int yearofservice;
  char gender, qualification;
  printf("Enter gender(M,F), year of service, qualification(P,G): ");
  scanf(" %c %d %c", &gender, &yearofservice, &qualification);
  if (gender == 'M' && yearofservice >= 10 && qualification == 'P')
    printf("The salary is 15000\n");
  else if (gender == 'M' && yearofservice >= 10 && qualification == 'G')
    printf("The salary is 10000\n");
  else if (gender == 'F' && yearofservice >= 10 && qualification == 'P')
    printf("The salary is 12000\n");
  else if (gender == 'F' && yearofservice >= 10 && qualification == 'G')
    printf("The salary is 10000\n");
  else if (gender == 'M' && yearofservice < 10 && qualification == 'P')
    printf("The salary is 10000\n");
  else if (gender == 'M' && yearofservice < 10 && qualification == 'G')
    printf("The salary is 8000\n");
  else if (gender == 'F' && yearofservice < 10 && qualification == 'P')
    printf("The salary is 10000\n");
  else if (gender == 'F' && yearofservice < 10 && qualification == 'G')
    printf("The salary is 6000\n");
  else
    printf("Invalid Input\n");

  return 0;
}
