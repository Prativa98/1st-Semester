#include<stdio.h>
int printer();
void main(){
int dble;
dble=printer();
printf("%d",dble);
}
int printer(){
int a;
printf("enter a number to make double:");
scanf("%d",&a);
return a*2;
}
