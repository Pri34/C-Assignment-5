#include <stdio.h>

int main(void)
{
	int n, x, i;
	
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
	
	// Input element to search
	printf("\nEnter element to search for: ");
	scanf("%d", &x);
	
	// Linear search for x at a[pos-1]
	int pos = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			pos = i + 1;
			break;
		}
	}
	
	// Output
	if (pos > 0)
		printf("\nElement %d found at position %d.\n", x, pos);
	else
		printf("\nElement %d not found in array.\n", x);
	
	return 0;
}