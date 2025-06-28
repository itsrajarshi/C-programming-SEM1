#include <stdio.h>
int main(void)
{
  int i,j,num=1;
  for (i=0; i<5; i++)
    {
      for (j=0; j<5;j++)
        {
          printf("%d\t",num);
          num++;
        }
      printf("\n");
    }
  return 0;
}
  
       
// This program prints a 5x5 grid of numbers starting from 1.
// It uses nested loops to iterate through rows and columns, incrementing the number for each cell