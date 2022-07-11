Implement basic logic gates using C (AND, OR, NOT). Consider the inputs: 0,0

               0,1
    
              1,0
    
               1,1. 
    
    



    #include<stdio.h>
    int main()
    {
    int a,b,c,d,e;
    printf("enter the a and b value");
    scanf("%d %d",&a,&b);
    c=a&&b;
    d=a||b;
    e=!a;
    printf("%d %d %d",c,d,e);
    }
