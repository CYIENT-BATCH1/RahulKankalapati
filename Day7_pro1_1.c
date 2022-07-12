1.Write a program to convert a data stream from Little Endian to Big Endian

Program:

#include <stdio.h>
int main()
{
 int a=0x14;//declaration
 a=(a>>4)|((a&0x0f)<<4);//logic
printf("%x",a);//taking o/p
}