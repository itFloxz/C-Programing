/*Coding_35*/
#include <stdio.h>
#include <stdlib.h>

int functionRandom (int A[5][5][5], int i ,int j, int k, int x1, int y1, int z1, int B[125], int index);


main()
{
	int A[5][5][5],B[125];
	int x1,y1,z1,i,j,k;
	int tmp,con,select,total,space,index;
	char alp;
	tmp = 1;
	con = 1;
	while(tmp == 1)
	{
		printf("input x value:");
		scanf(" %d",&x1);
		printf("input y value:");
		scanf(" %d",&y1);
		printf("input z value:");
		scanf(" %d",&z1);
		index = 0;

		functionRandom (A , i , j, k, x1, y1, z1, B, index);

		printf("--------------------------------\n");
		printf("1.High to Low\n");
		printf("2.Low to High\n");
		printf("-------------------------------\n");
		printf("Select between High to Low or Low to High :");
		scanf(" %d",&select);

		total = x1 * y1 * z1;

		if(select == 1)
		{
			for(i = 0; i < total - 1; i++)
			{
					if(B[i] < B[i + 1])
					{
						space = B[i];
						B[i] = B[i + 1];
						B[i + 1] = space;
						i = -1;
					}
			}
		}
		if(select == 2)
		{
			for(i = 0; i < total - 1; i++)
			{
				if(B[i] > B[i + 1])
				{
					space = B[i];
					B[i] = B[i + 1];
					B[i + 1] = space;
					i = -1;
				}
			}
		}
		for (i = 0; i < total; i++)
		{
        	printf("\nB[%d]: %d\n", i, B[i]);
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
			con = 2;
		}
		tmp = 1;
		con = 1;
	}
}

int functionRandom (int A[5][5][5], int i ,int j, int k, int x1, int y1, int z1, int B[125], int index)
{
	for(i = 0; i < x1; i++)
			{
				for(j = 0; j < y1; j++)
				{
					for(k = 0;k < z1; k++)
					{
						A[i][j][k] = 0;
						A[i][j][k]= rand()% 200 + 1;
						printf("\nA[%d][%d][%d]: %d\n",i,j,k,A[i][j][k]);
					}
				}
			}
			for (i = 0; i < x1; i++)
			{
				for (j = 0; j < y1; j++)
				{
					for (k = 0; k < z1; k++)
					{
						B[index] = A[i][j][k];
						index++;
		 			}
				}
        }
}