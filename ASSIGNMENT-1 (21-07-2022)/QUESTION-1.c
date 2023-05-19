#include <stdio.h>
int main()
{
    int k[50];
    int i;
    printf("Enter 50 Integers:");
    for(i=0;i<50;i++)
        scanf("%d",&k[i]);
    printf("The Elements in Array are:");
    for(i=0;i<50;i++)
    {
        printf("%d ",k[i]);
    }
    return 0;
}