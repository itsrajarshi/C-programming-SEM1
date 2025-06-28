#include <stdio.h>
int main()
{
    char ch1,ch2;
    scanf(" %c", &ch1);
    ch1 = ch1 + 'a' - 'A';
    printf("%c \n",ch1);
    scanf(" %c", &ch2);
    ch2 = ch2 + 'a' - 'A';
    printf("%c",ch2);
    return 0;
}