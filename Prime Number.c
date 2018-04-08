#include<stdio.h>
void main(){
int a,i,f;
for(a=10;a<=100;a++){
    f=10;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
            f=20;
    }
if(f==10)
    printf("prime number is:%d\n",a);



}








}
