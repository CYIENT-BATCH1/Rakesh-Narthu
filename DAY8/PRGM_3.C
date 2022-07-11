3. a)Set the register T0CON value such a way that bit TMR0ON and PSA bit are set (1), without disturbing the other bits.

Algorithm:

1.Instilize and daclare the variables.
2)If we want the first requirement  to take right bit position times should be equal to this bit TMRON and Psa bits in T0CON register if the value of the register is 0x55
3)After that we can do  left shift with this register to get the bits setTMR0ON and PSA so this bits are in set the requirement.
4)Take the o/p.

  PROGRAM:
#include<stdio.h>

int main(){
    int n=0xfa;
    int pos=3;
    int pos1=7;
    n=n|(1<<pos)|(1<<pos1);

    printf("%x",n);
}


b)Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register if the value of the register is 0xF3

Algorithm:
1.Instilize and daclare the variables.
2.To know the f3 value in binary form use for loop.
3.Make x equal to n rightshift with i and AND with 1.
4.print x value and take output.

  PROGRAM:
#include <stdio.h>
int main()
{
   int n=0xf3,x,i;
   for(i=2;i>=0;i--){
    x=(n>>i)&1;
   printf("%x",x);
   }
}
