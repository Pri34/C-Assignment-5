#include <stdio.h>

int main(void)
{
	// Input
	int n;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int a[n];
	
	int i, j;
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\n Original Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Bubble Sorting a[n]
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1-i; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
		
	
	// Output
	printf("\n   Sorted Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}