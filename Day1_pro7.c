7.Find whether a given 10-digit number is palindrome or not. (HINT: Any number is said to be a palindrome if the original
 number and the reverse of the original number are the same.)
Program:
#include<stdio.h>
int main(){
int r,num,rev=0;
printf("enter the value");
scanf("%d",&r);
while(r>0){
int temp=r;
num=r%10;
rev=rev*10+num;
r=r/10;
}
if(rev==temp)
printf("the given no is palindrome);
else
printf("the given no is not palindrome);
} 