7. I). Set the register SSPSTAT value such a way that bit CKE, P and S bit are cleared (0), without disturbing the other bits.

      II). Find out the value of UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55.
  
1) Algorithm:

1.Instilize and daclare the variables.
2)If we want the first requirement  to take right bit position times should be equal to this bits 
UA, BF, SMP bits in SSPSTAT register if the value of the register is 0x55
4)After that we can do  right shift with this register to get the bits clear CKE, P and S  so this bits are in clear the requirement.
5)Take the o/p.
  
1)PROGRAM:
  #include<stdio.h>
   int main(){
    int n=0xfa; 
    int pos=3;
    int pos1=4;
    int pos2=6;
    n=n&~(1<<pos)&~(1<<pos1)&~(1<<pos2);

    printf("%x",n);

2) Algorithm:
1.Instilize and daclare the variables.
2.initilized 'a' will be AND with 1 leftshift with 0,1,7.
3.store the above values in b,c,d.
4.print b,c,d and take output.

  2)PROGRAM:
  #include <stdio.h>
 int main(){
    int b,c,e, a=0x55;
    b=a&(1<<0);
    c=a&(1<<1);
    d=a&(1<<7);
    printf("%d%d%d",b,c,d);
  }
