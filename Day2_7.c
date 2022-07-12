/*Find the number of leap years in the interval 1990-2022.*/
Program:
#include<stdio.h>
int main()
{
	int year=1999,count=0;
	while(year<=2022){
		if(year%4==0){
			count++;

		}
		year++;
	}
	printf("%d",count);
}
