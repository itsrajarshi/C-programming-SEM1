#include <stdio.h>
#include <string.h>
struct student
{
int roll;
char name[20];
float CGPA;
} s;

int main()
{
  s.roll =56;
  printf("Num = %d\n", s.roll);
  strcpy(s.name,"Sohail");
  printf("Name: %s\n",s.name);
  s.CGPA = 8.2;
  printf("cgpa: %f\n",s.CGPA);
  
}

/* 
*/