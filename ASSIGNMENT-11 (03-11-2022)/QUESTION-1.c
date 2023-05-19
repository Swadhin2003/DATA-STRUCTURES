#include <stdio.h>
int main() 
{
   int a[]={9,7,8,5,6,1,3,4,0,2};
   int n=10;
   int i, j, k, swap;
   for (i = 0; i < (n - 1); i++) 
   {
      k = i;
      for (j = i + 1; j < n; j++) 
      {
        if (a[k] > a[j])
        k = j;
      }
      if (k != i) 
      {
        swap = a[i];
        a[i] = a[k];
        a[k] = swap;
      }
   }
   for (i = 0; i < n; i++)
   printf("%d\t", a[i]);
   return 0;
}