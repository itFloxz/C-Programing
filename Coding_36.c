/*Coding_36*/
#include<stdio.h>
#define size 20

main()
{
	int A[size],i;
	int *ptr = &A;
	int tmp,con;
	float sum,result;
	char alp;
	tmp = 1;

	while(tmp == 1)
	{
		con = 1;
		for(i = 0; i < size; i++)
		{
			printf("INPUT VALUE FOR A[%d] : ",i);
			scanf("%d", &A[i]);
		}
		for(i = 0; i < size; i++)
		{
			sum += ptr[i];
		}
		result = sum / 20;
		printf("Average Sum : %.2f\n", result);
		tmp = 2;

		while (con == 1)
		{
			printf("Do you want to exit? :(Y/N):");
			scanf(" %c", &alp);

			while (alp == 'Y' || alp == 'y')
			{
				return 0;
			}
				tmp = 1;
				con = 2;
		}
	}

}