2. Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit


Program:
#include <stdio.h>
 int main()
{
    unsigned int num;
    printf("enter as number");
    scanf("%u",&x);//Reade from user 
    unsigned  int evenbit=num&0xAAAAAAAAAAAAAAAA;
    unsigned int oddbit=num&0x5555555555555555;
    evenbit=evenbit>>1;
    oddbit=oddbit<<1;
    num=evenbit|oddbit;
    printf("%u",num);//taking o/p
}
