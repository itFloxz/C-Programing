/*Coding_34*/
#include <stdio.h>

int function2DArrayAverage(int A[5][5], int B[5][5], int C[5][5], int i, int j, int x1, int y1, float result, int sum);

main()
{
	int A[5][5], B[5][5], C[5][5];
	int i, j, tmp, con, x1, y1, sum;
	float result;
	char alp;
	tmp = 1;
	con = 1;
	sum = 0;
	result = 0;
	while (tmp == 1)
	{
		function2DArrayAverage(A, B, C, i, j, x1, y1, result, sum);
	}

	while (con == 1)
	{
		printf("Do you want to exit? :(Y/N):");
		scanf(" %c", &alp);

		while (alp == 'Y' || alp == 'y')
		{
			return 0;
		}
		tmp = 2;
	}
}

int function2DArrayAverage(int A[5][5], int B[5][5], int C[5][5], int i, int j, int x1, int y1, float result, int sum)
{
	printf("INPUT (X) VALUE FOR ARRAY:");
	scanf(" %d", &x1);
	printf("INPUT (Y) VALUE FOR ARRAY:");
	scanf("%d", &y1);

	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
		{
			A[i][j] = 0;
			printf("PLEASE INPUT VALUE IN A ARRAY[%d][%d]:", i, j, A[i][j]);
			scanf("%d", &A[i][j]);
		}
	}

	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
		{
			B[i][j] = 0;
			printf("PLEASE INPUT VALUE IN B ARRAY[%d][%d]:", i, j, B[i][j]);
			scanf("%d", &B[i][j]);
		}
	}
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
		{
			C[i][j] = A[i][j] * B[i][j];

			printf("\nSUM IN ARRAY C[%d][%d]: %d\n", i, j, C[i][j]);
			printf("\n");
		}
	}
	for (i = 0; i < x1; i++)
	{
		for (j = 0; j < y1; j++)
		{
			sum += C[i][j];
		}
	}
	result = sum / (x1 * y1);
	printf("Average Sum : %.2f\n", result);
}