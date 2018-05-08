#include<stdio.h>
void main(){
char *cp,ch;
int *ip,i;
float *fp,f;
double *dp,d;
cp=&ch;
ip=&i;
fp=&f;
dp=&d;
//now incrementing//
cp++;
i++;
fp++;
dp++;
printf("%x %x %x %x",cp,i,fp,dp);






}
