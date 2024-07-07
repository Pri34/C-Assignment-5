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
	
	// UNION of a[m] and b[n]
		
	int u[m+n], size_u = 0;
	
	for (i = 0; i < m; i++)
	{
		// Copying a to u, while removing all duplicates and finding real size
		int count = 0;
		
		for (j = 0; j < size_u; j++)
		{
			if (a[i] == u[j])
			{
				count++;
				break;
			}
		}
		
		if (count == 0)
		{
			u[size_u] = a[i];
			size_u++;
		}
	}
	
	for (i = 0; i < n; i++)
	{
		// Checking if each element of b (b[i]) already exists in u (u[j])
		int count = 0;
		
		for (j = 0; j < size_u; j++)
		{
			if (b[i] == u[j])
			{
				count++;
				break;
			}
		}
		
		if (count == 0)
		{
			// If this element is unique, copy this element as the last one
			// and increment current size of u
			u[size_u] = b[i];
			size_u++;
		}
		
	}
	
	
	// INTERSECTION of a[m] and b[n]
	
	int inter[m], size_inter = 0;
	
	// Add the element in inter only if in both a and b (a[i] == b[j])
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i] == b[j])
			{
				inter[size_inter] = a[i];
				size_inter++;
			}
		}
	}
	
	
	// Output
	printf("\n            Array 1: {");
	for (i = 0; i < m; i++)
	{
		printf("%d", a[i]);
		(i == m-1) ? printf("}\n") : printf(", ");
	}
	printf("\n            Array 2: {");
	for (j = 0; j < n; j++)
	{
		printf("%d", b[j]);
		(j == n-1) ? printf("}\n") : printf(", ");
	}
	printf("\n        Union Array: {");
	for (i = 0; i < size_u; i++)
	{
		printf("%d", u[i]);
		(i == size_u-1) ? printf("}\n") : printf(", ");
	}
	printf("\n Intersection Array: {");
	for (i = 0; i < size_inter; i++)
	{
		printf("%d", inter[i]);
		(i == size_inter-1) ? printf("}\n") : printf(", ");
	}
	
	return 0;
}