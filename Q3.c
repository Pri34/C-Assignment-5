#include <stdio.h>

int main(void)
{
	// Input
	int n, ind;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int a[n], i;
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("Enter position to delete: ");
	scanf("%d", &ind);
	ind--;
	printf("\nOriginal Array:  {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Deleting index ind
	for (i = ind; i < n-1; i++)
	{
		a[i] = a[i+1];
	}
	a[n-1] = 0;
	
	// Output
	printf("\nModified Array:  {");
	for (i = 0; i < n-1; i++)
	{
		printf("%d", a[i]);
		(i == n-2) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}