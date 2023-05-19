#include <stdio.h>
int main ()
{
   int i, j, t, n;
   printf("Enter number of elements in an array:");
   scanf("%d", &n);
   int a[n];
   printf("Enter the elements:");
   for (i = 0; i < n; ++i)
      scanf("%d", &a[i]);
   for (i = 0; i < n; ++i)
   {
      for (j = i + 1; j < n; ++j)
      {
         if (a[i] < a[j])
         {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }
   printf("The numbers in descending order is:");
   for (i = 0; i < n; ++i)
   printf("%d ", a[i]);
}