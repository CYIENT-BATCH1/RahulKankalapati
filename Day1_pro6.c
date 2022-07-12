6.Students with roll numbers 1-9 are seated in ascending order in an examination hall. There has been a slight mistake in their seating arrangement where two consecutive roll numbers have been swapped.
 Choose these two consecutive numbers as per your choice and swap them back in their right places according to ascending order.
Program:
#include<stdio.h>
int main(){
int r,k;
printf("enter the value");
scanf("%d %d",&r,&k);
r=r+k;
k=r-k;
r=r-k;
printf("%d %d",r,k);
}