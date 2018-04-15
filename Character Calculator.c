#include<stdio.h>
void main(){
float a,b;
char c;
printf("what do u want to perform?\naddition\ndivision\nmultiplication\nsubstraction\nEnter the first character:");
c=getche();
printf("\nenter the two numbers:\n");
scanf("%f %f",&a,&b);
if(c=='a')
printf("the addition is:%f+%f=%.2f",a,b,a+b);
if(c=='s')
printf("the substraction is:%f-%f=%.3f",a,b,a-b);
if(c=='m')
printf("the multplication is:%f*%f=%.2f",a,b,a*b);
if(c=='d')
printf("the division is:%f/%f=%.2f",a,b,a/b);




}
