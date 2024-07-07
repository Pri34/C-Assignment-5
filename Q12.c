#include <stdio.h>

int main(void)
{
	// Input
	int n;
	printf("Enter number of chars: ");
	scanf("%d", &n);
	fflush(stdin);
	char a[n];
	
	int i, j, k;
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%c", &a[i]);
		fflush(stdin);
	}
	
	printf("\n              Array: {");
	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
		(i == n-1) ? printf("}\n") : printf(", ");
	}
	
	// Making an array containing all the 'n' rotations of a[n]
	char rot[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			rot[i][j] = a[j];
		}
		
		// Left-Rotating a[n]
		int temp = a[0];
		for (j = 0; j < n-1; j++)
		{
			a[j] = a[j+1];
		}
		a[n-1] = temp;
	}
		
	
	// Output
	printf("\n Rotations of Array: (");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%c", rot[i][j]);
		}
		(i == n-1) ? printf(")\n") : printf(", ");
	}
	
	return 0;
}