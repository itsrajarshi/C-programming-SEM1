/*Continue

The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of 4: */
#include <stdio.h>

int main(void) 
{
  int i;
  for (i = 0; i < 10; i++) 
  {
      if (i == 5) 
      {
        
        continue;
        //break;
        
      }
  
    printf("%d\n", i);
  } 
return 0;
}