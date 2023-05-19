#include<stdio.h>
int main()
{
    int i,x,smallest,largest;
    printf("No. of array elements:");
    scanf("%d",&x);
    int a[x];
    printf("Enter the integers:");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]); 
    smallest= a[0];
    largest=a[0];
    for (i=0;i<x;i++)
        {
            if (smallest>a[i])
                smallest=a[i];
            if (largest<a[i])
                largest=a[i];
        }
    printf("The largest number:%d\n",largest);
    printf("The smallest number:%d",smallest);  
    return 0;
}