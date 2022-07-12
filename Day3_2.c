/*Write a program to calculate the sum of the first and the second last digit of
a 5-digit number entered from the keyboard.*/
program:

#include <stdio.h>

int main()
{
    int r, sum=0, f, l;
    printf("Enter the numers first&last:");
    scanf("%d", &r);
    l= r % 10;
    f= r;
    while(r >= 10)
    {
       r= r / 10;
    }
    f=r;
    sum = f + l;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}
