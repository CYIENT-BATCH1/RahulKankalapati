#include <stdio.h>
int main()
{
 int a=0x12;
 a=(a>>4)|((a&0x0f)<<4);
printf("%x",a);
}