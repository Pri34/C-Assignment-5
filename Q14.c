#include <stdio.h>

int main(void)
{
	// Inputting order of matrices
	int n;
	printf("Enter number of rows & columns: ");
	scanf("%d", &n);
	int mtrx1[n][n], mtrx2[n][n];
	
	// Inputting 2 matrices
	int i, j, k;
	printf("\nMATRIX 1:-\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter row %d separated by a char: ", i+1);
		for (j = 0; j < n; j++)
		{
			char c;
			scanf("%d%c", &mtrx1[i][j], &c);
		}
	}
	
	printf("\nMATRIX 2:-\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter row %d separated by a char: ", i+1);
		for (j = 0; j < n; j++)
		{
			char c;
			scanf("%d%c", &mtrx2[i][j], &c);
		}
	}
	printf("\n");
	
	// Adding mtrx1 and mtrx2
	int add[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			add[i][j] = mtrx1[i][j] + mtrx2[i][j];
		}
	}
	
	// Multiplying each row of mtrx1 with each col of mtrx2
	int mult[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			mult[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				mult[i][j] += mtrx1[i][k] * mtrx2[k][j];
			}
		}
	}
	
	// Transposing both matrices
	int t1[n][n], t2[n][n];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			t1[i][j] = mtrx1[j][i];
			t2[i][j] = mtrx2[j][i];
		}
	}
	
	// Output
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx1[i][j]);
		}
		(i == n/2) ? printf("    +   ") : printf("        ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx2[i][j]);
		}
		(i == n/2) ? printf("    =   ") : printf("        ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", add[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx1[i][j]);
		}
		(i == n/2) ? printf("    X   ") : printf("        ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx2[i][j]);
		}
		(i == n/2) ? printf("    =   ") : printf("        ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", mult[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < n; i++)
	{
		(i == n/2) ? printf("Transpose of ") : printf("             ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx1[i][j]);
		}
		(i == n/2) ? printf("      =     ") : printf("            ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", t1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i = 0; i < n; i++)
	{
		(i == n/2) ? printf("Transpose of ") : printf("             ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", mtrx2[i][j]);
		}
		(i == n/2) ? printf("      =     ") : printf("            ");
		for (j = 0; j < n; j++)
		{
			printf(" %d", t2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}