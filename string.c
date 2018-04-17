#include<stdio.h>
void main(){
char text [10][80];
int i;
for(i=0;i<10;i++){
printf("%d:",i);
gets(text[i]);
}
do{
    printf("enter the number of string(1-10):");
    scanf("%d",&i);
    if(i>=0&&i<10)
        printf("%s\n",text[i]);

}
while(i>=0);


}
