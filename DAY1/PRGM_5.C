5 balls are numbered with random 1-digit number each. Assign these numbers using user input. Print whether each ball is assigned odd or even number.


#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("Enter the value");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2==0)
    printf("Even \n");
    else
    printf("Odd\n");
    if(b%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
     if(c%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
    if(d%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
    if(e%2==0)
    printf("Even\n");
    else
    printf("Odd\n");
    return 0;
}
