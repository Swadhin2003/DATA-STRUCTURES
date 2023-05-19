#include <stdio.h>
int main()
{
    int k[5];
    int i;
    int sum = 0;
    printf("Enter the Numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&k[i]);
        sum = sum + k[i];
    }
    printf("The Sum is:%d",sum);
    return 0;
}