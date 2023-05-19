#include <stdio.h>
int main()
{
    int n, i, a, b, c = 0;
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter elements of array:");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter lower limit element & upper limit element respectively:");
    scanf("%d %d", &a, &b);
    int arj[10];
    for (i = 0; i < n; i++)
    {
        if (arr[i] == a || arr[i] == b)
        {
            c++;
        }
        if (arr[i] > a && arr[i] < b)
        {
            c++;
        }
    }
    printf("Number of elements in between two elements (Both Inclusive):%d", c);
    return 0;
}