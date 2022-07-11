#include<stdio.h>
int main()
{
    unsigned int x,l;
    printf("Enter the value");
    scanf("%d",&x);
unsigned even=x&0xAAAAAAAAAAAAAAAA;//A=10101010 means even bit

 unsigned odd=x&0x5555555555555555;// 0101 is odd bit
    l=(even>>1)|(odd<<1);
   printf("%d",l);

}
