Find whether a given 10-digit number is palindrome or not. (HINT: Any number is said to be a palindrome if the original number and the reverse of the original number are the same.)



#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter the nu");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
        
    }
    if(sum==temp)
    printf("%d",sum);
    
}
