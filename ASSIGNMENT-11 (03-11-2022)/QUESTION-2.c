#include <stdio.h>
int main()
{
	int n = 10;
	int a[] = {9,7,3,4,5,0,2,1,6,8};
	for (int i = 1; i < n;i++)
	{
		int j = i, temp = a[i];
		while(j > 0 && temp < a[j-1])
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = temp;
	}
	for (int i = 0; i < n;i++)
	printf("%d\t", a[i]);
}