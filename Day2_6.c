/*Write a program to convert Celsius form of temperature into Fahrenheit and vice versa.*/


#include<stdio.h>
int main()
{
	int c,f;
	printf("Enter the tempareture:");
	scanf("%d",&c);
	f=c*9/5+32;
	c=5/9*(f-32);
	printf("Convert celius to farenheat%d\n",f);
	printf("Convert farenheat to celius%d\n",c);
	return 0;
}

