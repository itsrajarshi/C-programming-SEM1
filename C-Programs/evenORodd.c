#include <stdio.h>
void main()
{
 int number,variable;
 printf("Enter the number: ");
   scanf("%d", &number);
   variable = number%2;
    if (variable == 0)
    {
        printf("EVEN");
    } 
    else
    {
        printf("ODD");
    }
    return 0;
}