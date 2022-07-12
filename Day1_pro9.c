9.implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,00,11,01,1
program:
#include<stdio.h>
int main(){
int a,b,x,y,z;
printf("enter the value");
scanf("%d %d,&a,&b);
x=a&b;
y=a|b;
z=!a;
printf("%d %d %d",x,y,z);
}