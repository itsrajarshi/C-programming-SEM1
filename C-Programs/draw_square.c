#include <stdio.h>

int main(void) 
{
  for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if(i == 0 || i == 5 - 1 || j == 0 || j == 5 - 1) 
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}