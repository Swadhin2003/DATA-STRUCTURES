#include <stdio.h>
int main()
{
    int A[3][3];
    int B[3][3];
    int sum[3][3];
    printf("Input matrix A:\n");
    for (int i=0; i<3; i++)
    {
        printf("For row %d:", i+1);
        scanf("%d%d%d", &A[i][0], &A[i][1], &A[i][2]);
    }
    printf("\nInput matrix B:\n");
    for (int i=0; i<3; i++)
    {
        printf("For row %d:", i+1);
        scanf("%d%d%d", &B[i][0], &B[i][1], &B[i][2]);
    }
    for (int rows=0; rows<3; ++rows)
    {
        for (int cols=0; cols<3; cols++)
        {
            sum[rows][cols] = (A[rows][cols] + B[rows][cols]);
        }
        printf("\n");
    }
    printf("Sum of matrix A and B:\n");
    for (int rows=0; rows<3; ++rows)
    {
        for (int cols=0; cols<3; cols++)
        {
            printf("%d ", sum[rows][cols]);
        }
        printf("\n");
    }
    return 0;
}