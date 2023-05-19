#include<stdio.h>
int main()
{
   int i,x,e,index=-1;
   printf("No. of array elements:");
    scanf("%d",&x);
    int a[x];
    printf("Enter the integers:");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("Enter the number to be deleted:");
    scanf("%d\n",&e);
    for (i=0;i<x;i++)
        if(a[i]==e)
        {
           index=i;
           break;
        }
    if (index!=-1)
        {
            for (i=index;i<x-1;i++)
                a[i]=a[i+1];
            printf("Array after deletion:");
            for(i=0;i<x-1;i++)
                printf("%d ",a[i]);
        }
    else
        printf("Element not found");
    return 0;
}