#include<stdio.h>
int main()
{
   int i,x,p,e;
   printf("No. of array elements:");
   scanf("%d",&x);
    int a[x+1];
    printf("Enter the array elements:");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    printf("Enter the position and the element to be inserted:");
    scanf("%d\t%d\n",&p, &e);
    if (p>x)
        printf("Index out of range!");
    else{
    for (i=x+1;i>p;i--)
        a[i]=a[i-1];
    a[p]=e;
    printf("Array after insertion:");
    for(i=0;i<x+1;i++)
        printf("%d ",a[i]);
    }
    return 0;
}