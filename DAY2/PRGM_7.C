7)Find the number of leap years in the interval 1990-2022.
#include <stdio.h>int main()
{
    int x,y,i,count=0;
    printf("enter the number values");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++){
        if(i%4==0){
            count++;
        }
    }
     printf("%d",count);
}
