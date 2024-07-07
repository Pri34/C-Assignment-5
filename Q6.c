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
	
	// Sum and average of array
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	float avg = (float) sum / n;
	
	// Output
	printf(" Sum = %d\n Average = %.3f\n", sum, avg);
	
	return 0;
}