#include <stdio.h>

int main(void)
{
	// Input
	int n, x, ind;
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int a[n+1], i;
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nEnter element to insert: ");
	scanf("%d", &x);
	printf("Enter position to insert: ");
	scanf("%d", &ind);
	ind--;
	printf("\nOriginal Array:  {");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Inserting x at index ind
	for (i = n; i > ind; i--)
	{
		a[i] = a[i-1];
	}
	a[ind] = x;
	
	// Output
	printf("\nModified Array:  {");
	for (i = 0; i < n+1; i++)
	{
		printf("%d", a[i]);
		(i == n) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}