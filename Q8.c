#include <stdio.h>

int main(void)
{
	int n, i;
	
	// Input Array
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Largest and smallest of array
	int max = a[0], min = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		else if (a[i] < min)
			min = a[i];
	}
	
	// Output
	printf("  Largest = %d\n Smallest = %d\n", max, min);
	
	return 0;
}