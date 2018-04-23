#include<stdio.h>
int get_sqr(void);
int main(void)
{
int sqr;
sqr=get_sqr();
printf("square:%d",sqr);
return 0;

}
int get_sqr()
{
int num;
printf("enter a number:");
scanf("%d",&num);
return num*num;





}
