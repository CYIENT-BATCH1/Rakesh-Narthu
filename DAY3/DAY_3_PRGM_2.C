2)Write a program to calculate the sum of the first and the second last digit of a 5-digit number entered from the keyboard.
prgm:
#include<stdio.h>
int main()
{
    int n,r,count=0,sum=0;
    printf("enter the 5 digit number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        count++;
    if(count==2||count==5)  
    {
        sum=sum+r;
    }
    n=n/10;
    }
   printf("%d",sum);
}
