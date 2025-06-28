#include <stdio.h>

int main()
{
  int arr[7]={7,13,21,16,9,31,24},i;
  int max = 0;
  max = arr[0];
  for(i=1;i < 7;i++)
    {
    if(arr[i]>max)
    {
      max = arr[i];
    }
    }
printf("largest = %d\n",max);
}