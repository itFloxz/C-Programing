/*Coding_33*/
#include<stdio.h>

int function1DArrayplus(int A[10], int B[10], int C[10], int i);

main()
{
	int A[10],B[10],C[10];
	int i,tmp,con;
	char alp;
	con = 1;
	tmp = 1;

	while(tmp == 1)
	{
		function1DArrayplus(A, B, C, i);

        while (con == 1)
		{
			printf("Do you want to exit? :(Y/N):");
			scanf(" %c", &alp);

			while (alp == 'Y' || alp == 'y')
			{
				return 0;
			}
				con = 2;
		}
		con = 1;
	}
}

int function1DArrayplus(int A[10], int B[10], int C[10], int i)
{
	for(i  = 0 ; i < 10; i++)
	{
		printf("INPUT VALUE FOR A[%d] : ",i);
		scanf("%d", &A[i]);
	}
	for(i  = 0 ; i < 10; i++)
	{
		printf("INPUT VALUE FOR B[%d] : ",i);
		scanf("%d", &B[i]);
	}

	for(i  = 0 ; i < 10; i++)
	{
		C[i] = A[i] + B[i];
		printf("Total C[%d] : %d\n",i,C[i]);
		printf("\n");
	}
}