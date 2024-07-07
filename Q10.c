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
	
	// Finding & Removing duplicates from current element to end of a[n]
	for (i = 0; i < n; i++)
	{
		int count = 0;
		for (j = i+1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				count++;
				break;
			}
		}
		
		if (count != 0)
		{
			// Removing this duplicate element by shifting all others to left
			for (j = i; j < n-1; j++)
			{
				a[j] = a[j+1];
			}
			a[n-1] = 0;
			
			// Reduce size of array after removal, and make sure we keep up with the shift
			n--;
			i--;
		}
	}
		
	
	// Output
	printf("\n Modified Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}