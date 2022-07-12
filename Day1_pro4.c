4.Take a 6-digit number as input from the user and reverse the number.
 Make sure that the number does not include a ‘0’ in any of its digits.
program:
#include<stdio.h>
int main(){
int r,num,rev=0;
printf("enter the value");
scanf("%d",&r);
while(r>0){
num=r%10;
rev=rev*10+num;
r=r/10;
}
printf("%d",rev);
}