#include <stdio.h>
int main() 
{
   int n, i, s, arr[30];
   printf("Enter the number of elements in the array:");
   scanf("%d", &n);
   printf("Enter the array elements:");
   for (i = 0; i < n; i++) 
   {
      scanf("%d", &arr[i]);
   }
   printf("Enter the item to be searched:");
   scanf("%d", &s);
   i=0;
    while (i < n && s != arr[i]) 
    {
    i++;
   }
   if (i<n) 
   {
      printf("The element is found in the position:%d", i + 1);
   } else 
   {
      printf("Element not found!");
   }
}