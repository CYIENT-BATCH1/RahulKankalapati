4.Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position.
 Function has to flip the bit position (as per argument 2) in argument 1 byte value and return complete byte value.

#include <stdio.h>
int fun(int arg1,int arg2){
    arg1=arg1^(1<<arg2);
    return arg1;
}
int main(){
    printf("%x",fun(0x81,1));//output:83//1000 0001^0000 0010=1000 0011=83

}