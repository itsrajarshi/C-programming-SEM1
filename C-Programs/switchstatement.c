
#include<stdio.h>
int main()
{
    int a,b;
    char op='+';
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your Choice : ");
    scanf("%c",&op);
    printf("Char=%c",op);
    switch(op)
    {
    case '+'	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case '-'	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case '*'	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case '/'	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}
