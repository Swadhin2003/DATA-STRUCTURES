#include<stdio.h>
int main()
{
    int i,n,sum,mul;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    sum=0;
    mul=1;
    printf("Enter the elements:");
    for (i=0;i<n;i++)
        scanf("%d", &a[i]); 
    for (i=0;i<n;i++)
    {
        if (a[i]%2==0)
            sum=sum+a[i];
        else
            mul=mul*a[i];
    }
    printf("The sum of even elements:%d\n",sum);
    printf("The product of odd elements:%d\n",mul);
    return 0;
}