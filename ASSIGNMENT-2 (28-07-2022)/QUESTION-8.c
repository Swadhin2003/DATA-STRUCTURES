#include <stdio.h>
void NonZeroElements(int (*Arr)[5], int n)
{
int a = 0;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (*(*(Arr + i) + j) != 0)
a++;
}
}
printf("Number of non-zero elements in array:%d\n", a);
}
void sumOfElementsAboveLeadingDiagonal(int (*Arr)[5], int n)
{
int a;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (j > i)
a += *(*(Arr + i) + j);
}
}
printf("Sum Of Elements Above Leading Diagonal:%d\n", a);
}
void ElementsBelowMinorDiagonal(int (*Arr)[5], int n)
{
printf("Elements below the minor diagonal:\n");
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (j >= n - i)
printf(" %d", *(*(Arr + i) + j));
else
printf(" ");
}
printf("\n");
}
}
void ProductOfdiagonalElements(int (*Arr)[5], int n)
{
int a = 1;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (i == j)
a *= *(*(Arr + i) + j);
}
}
printf("Product of leading diagnal Elements:%d", a);
}
int main()
{
int mat[5][5] = 
{
{01, 05, 10, 15, 20},
{25, 30, 35, 40, 45},
{50, 55, 60, 65, 70},
{75, 80, 85, 90, 95},
{100, 105, 110, 115, 120},
};
int n = 5;
NonZeroElements(mat, n);
sumOfElementsAboveLeadingDiagonal(mat, n);
ElementsBelowMinorDiagonal(mat, n);
ProductOfdiagonalElements(mat, n);
}