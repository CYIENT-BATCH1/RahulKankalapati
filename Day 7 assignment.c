1.Write a program to convert a data stream from Little Endian to Big Endian
/*Algorithm

1.Declare a variable "a" and assign any 8 bit value.
2.Using bit wise operaters first right shift the value of "a".
3.Use logical "and"operator with variable "a" and left shift the vlue.
4.Use logical "or" operator concatenate the right and left shift values.
5.check the result */
Program:

#include <stdio.h>
int main()
{
 int a=0x12;
 a=(a>>4)|((a&0x0f)<<4);
printf("%x",a);
}

2. Write a code to swap even bits with odd bits in unsigned long variable(uint64).
Example: bit 0 with bit 1; bit 2 with bit 3; bit 4 with bit
/*Algorithm
1.scan the variables
2.To check and convert even into odd with above example formate
3.To swap the even into odd with bits
4.Take one tempararory variable and store as evenbit|oddbit.
5.Take the o/p

Program:
#include <stdio.h>
 int main()
{
    unsigned int x;
    printf("enter as number");
    scanf("%u",&x);
    unsigned  int evenbit=x&0xAAAAAAAAAAAAAAAA;
    unsigned int oddbit=x&0x5555555555555555;
    evenbit=evenbit>>1;
    oddbit=oddbit<<1;
    x=evenbit|oddbit;
    printf("%u",x);
}

3. Write program to clear(0) bits CIS, CM2, CM1, CM0 in register “CMCON” if bits CHS3, CHS2, CHS1, CHS0 bits are set to 0x07
 in register “ADCON0”
Image label

Image label

/*Algorithm
1.scan the registers
2.convert the registers bytes into binary
3.iterate the registers
4.write the o/p.
Program:
int main()
{
    char ADCON0bits_t, CMCONbits_t,i;

    ADCON0bits_t = 0x3C; //Intialize with 0x3C
    CMCONbits_t = 0x02;//Intialize with 0x02

   for(i=7;i>=0;i--)
        printf("%d", (ADCON0bits_t>>i)&1);
    puts("");
   if(((ADCON0bits_t>>2)&(0x0F)) == 0x07)
                CMCONbits_t = 0xF0;
   for(i=7;i>=0;i--)
        printf("%d", (CMCONbits_t>>i)&1);

    return 0;
}

