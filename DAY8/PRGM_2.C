2. Write a program in C to sort an array using Pointer. The sample output must be as below

Algorithm:
1. Initilize a array,pointer with int data type and three variables.
2.Use 2 For loops for comparision purpose.
3.By comparing swap the values and arranged in asscending order.
4.Print the output in sorting manner.
  
  PROGRAM:
#include <stdio.h>
int main()
{
    int arr[7]={25,58,6,32,98,7};
    int *ptr;
    int i,j,t;
    ptr=&arr;
    for(i=0;ptr[i];i++)
{
    for(j=i+1;ptr[j];j++)
    {
        if(ptr[i]>ptr[j])
        {
            t=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=t;
        }
    }
    printf("%d ",ptr[i]);
}
    return 0;
}
