#include <stdio.h>

int main(void)
{
	int n, i, j;
	
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
	
	// Sum and mean of array
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	float mean = (float) sum / n;
	
	// Median of array
	float med;
	if (n % 2 != 0)
	{
		med = a[n/2];
	}
	else
	{
		int med1 = a[n/2 - 1];
		int med2 = a[n/2];
		med = (med1 + med2) / 2.0;
	}
	
	// Mode of array
	int mode = a[0], mode_count = 1;
	for (i = 0; i < n; i++)
	{
		int count = 1;
		for (j = i; j < n; j++)
			if (a[i] == a[j])
				count++;
		
		if (count > mode_count)
		{
			mode_count = count;
			mode = a[i];
		}
	}
	
	// Output
	printf(" Mean = %.3f\n Median = %.3f\n Mode = %d\n", mean, med, mode);
	
	return 0;
}