12. Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)

How Selection sort works is explained below.

Algorithm:
1.selection sort means print elements assending oredr or desending order
2.In main function given an array as user input
3.In sorting compare every element to other element so using for loops
4.After comparing store a value in any varible and swap 
5.print the values.
 
PROGRAM:   
#include<stdio.h>
void sort_element(int arr[], int n)
{
    int i,j;
    if(n>0)
    {int i,j,t;
     for(i=0;arr[i];i++)
    {
    for(j=i+1;arr[j];j++)
    {
        if(arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    }
}
}  
int main()
{
    int n=5,j;
    int arr[n];
    printf("Enter the Array Element:");
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    sort_element(arr,n);
    printf("After ascending order sort Array Elements are:");
    int i;
    for (i=0; i < n; i++)
     printf("%d ", arr[i]);
    return 0;
}

