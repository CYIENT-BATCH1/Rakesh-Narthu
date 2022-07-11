1.Consider the phone number of a person as user input and find the sum of its digits.
#include<stdio.h>
int main()
{
   int num,temp,rnum=0,rem;
   printf("enter the value");
   scanf("%d",&num);
   temp=num;
   start:
      rem=num%10;
      rnum=rnum+rem;
      num=num/10;
      if(num>0)
      goto start;
      printf("sum of the numbers  %d",rnum);
}
