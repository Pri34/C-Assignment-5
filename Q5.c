#include <stdio.h>

int main(void)
{
	int n, x, i;
	
	// Input Array
	printf("Enter number of integers in the SORTED array: ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\n Sorted Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Input element to search
	printf("\nEnter element to search for: ");
	scanf("%d", &x);
	
	// Binary search for x at a[ind]
	int ind = -1, l = 0, h = n-1, mid;
	while (l <= h)
	{
		mid = (l+h)/2;
		if (a[mid] == x)
		{
			ind = mid;
			break;
		}
		else if (x < a[mid])
		{
			h = mid-1;
		}
		else if (a[mid] < x)
		{
			l = mid+1;
		}
	}
	
	// Output
	if (ind >= 0)
		printf("\nElement %d found at position %d (index %d).\n", x, ind+1, ind);
	else
		printf("\nElement %d not found in array.\n", x);
	
	return 0;
}