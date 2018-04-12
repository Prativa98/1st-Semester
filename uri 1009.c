#include<stdio.h>
int main()
{
 char employee;
 double salary, sold;
 scanf("%s %lf %lf", &employee, &salary, &sold);
 printf("TOTAL = R$ %.2f\n",salary + ((sold * 15) / 100));
 return 0;
}
