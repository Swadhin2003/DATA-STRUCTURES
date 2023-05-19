#include<stdio.h>
int main()
{
   int i,x,e,flag=0;
   printf("No. of array elements:");
    scanf("%d",&x);
    int a[x];
    printf("Enter the integers:");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("Enter the number to be searched:");
    scanf("%d\n",&e);
    for (i=0;i<x;i++)
        if(a[i]==e)
        {
           printf("Element found at index %d",i);
           flag=1;
        }
    if (flag!=1)
        printf("Element not found");
}