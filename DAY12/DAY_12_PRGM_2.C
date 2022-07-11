Find empty strings in an array of strings (Array of strings will be given as input to program) and print the position of array where empty string is present. 
And replace the empty string array element as “CYIENT”
1.Take a array with pointer and assign a some strings with empty string
2.use for loop find the empty string and and assign a cyient name in that empty string
3.After finding the poition of empty string and the cyient in empty string.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *a[]={"apple","fruit", " ","orange","mango"};//Take an array with pointer with some strings
    int size=sizeof a/sizeof(a[0]);//find the size of array
    int pos=1;
    printf("%d",size);//print the size
    int i;

    for(i=0;i<5;i++){
        printf("\n");
        if(a[i]==" "){//check the condition empty string or not
            pos=pos+2;
         a[i]="cyient";//in empty string assign cyient

        }
    printf("%s ",*(a+i));//print all strings with cyient

    }
    printf("\n");
     printf("pos=%d\n",pos);//print the position of empty string
    return 0;
}
