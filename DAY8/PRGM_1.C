1.Realize a function which has 2 arguments and 1 return value. Argument 1 is Byte value, Argument 2 is bit position. Function has to flip the bit position (as per argument 2)
 in argument 1 byte value and return complete byte value.

Algorithm:
1.Declare 2 functions with arguments and with out arguments.
2.Initilize a with some value.
3.From the main function call the above function.
4. print the a value and take output.

  PROGRAM:
#include<stdio.h>

    int bitposition(int arg1,int arg2)
    {
        arg1=arg1^(1<<arg2);
    }
    int main()
{
    int a=0x81;
    printf("%d",(a));
}
