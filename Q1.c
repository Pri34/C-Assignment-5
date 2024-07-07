#include <stdio.h>

int main(void)
{
	// Input array
	int n;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nInteger Array:  {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Reversing array by swapping first and last elements till middle
	for (i = 0; i < n/2; i++)
	{
		int temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}

	// Output
	printf("Reversed Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}	
	
	return 0;
}