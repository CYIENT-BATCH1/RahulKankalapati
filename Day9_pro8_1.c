8.Write program to set (1) bits CIS, C2OUT, C1OUT in register “CMCON” if bits CHS3, CHS2, CHS1 bits are
 set to 0x06 in register “ADCON0”

#include<stdio.h>
int main()
   {
    int num1=0x2f; //0010 1111
    int num2=0x2a; //0010 1010
    num1=num1>>2;
    if(num1==0x06){
        num2|=((1<<7)|(1<<6)|(1<<3));
        printf("%x",num2);
    }
   }

/*#include <stdio.h>
int main()

{
  int num1,num2;
  printf("enter the values");
  scanf("%d%d",&num1,&num2);
  if((48 & num1) == 48)
  {
      num2=num2|(1<<3)|(1<<6)|(1<<7);
      printf("%d",num2);
  }
  else
  printf(" not equal nothing");

}*/