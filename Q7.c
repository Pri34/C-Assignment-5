#include <stdio.h>

int main(void)
{
	int m, n, i, j;
	
	// Inputting 2 Arrays
	printf("\nARRAY 1:-\n");
	printf("Enter number of integers: ");
	scanf("%d", &m);
	int a[m];
	for (i = 0; i < m; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	printf("\nARRAY 2:-\n");
	printf("Enter number of integers: ");
	scanf("%d", &n);
	int b[n];
	for (j = 0; j < n; j++)
	{
		printf("Enter element %d: ", j+1);
		scanf("%d", &b[j]);
	}
	
	// Merging a[m] and b[n]
	int c[m+n];
	for (i = 0; i < m; i++)
	{
		c[i] = a[i];
	}
	for (j = 0; j < n; j++)
	{
		c[m+j] = b[j];
	}
	
	// Output
	printf("\n      Array 1: {");
	for (i = 0; i < m; i++)
	{
		printf("%d", a[i]);
		(i == m-1) ? printf("}\n") : printf(", ");
	}
	printf("\n      Array 2: {");
	for (j = 0; j < n; j++)
	{
		printf("%d", b[j]);
		(j == n-1) ? printf("}\n") : printf(", ");
	}
	printf("\n Merged Array: {");
	for (i = 0; i < m+n; i++)
	{
		printf("%d", c[i]);
		(i == m+n-1) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}