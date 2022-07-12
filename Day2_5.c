/*A message is encoded in the form of numbers and sent to you.
 Write a program to decode the message. (HINT: A=1, B=2, … so on) */
program:
#include<stdio.h>
int main(){
    char x,y;
    printf("enter the character");
    scanf("%c",&x);
    y=x%64;
    printf("%d",y);
}
