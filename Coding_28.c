/*coding_28.c5*/
#include <stdio.h>

main()

{
	int select,A[5][5],B[5][5][5],tmp,con,i,j,k,x1,y1,x2,y2,z2;
	char alp;
	tmp = 1;
	con = 1;
	while(tmp == 1)
	{
		printf("Select array (1)2D / (2)3D :");
		scanf(" %d",&select);

		if(select == 1)
		{
			printf("INPUT (X) VALUE FOR ARRAY:");
			scanf(" %d",&x1);
			printf("INPUT (Y) VALUE FOR ARRAY:");
			scanf("%d",&y1);
			for(i=0;i<x1;i++)
			{
				for(j=0;j<y1;j++)
				{
					A[i][j] = 0;
					printf("A[%d][%d] = %d\n",i,j,A[i][j]);
					printf("\n");
				}
			}
		}
		if(select == 2)
		{
			printf("INPUT (X) VALUE FOR ARRAY:");
			scanf(" %d",&x2);
			printf("INPUT (Y) VALUE FOR ARRAY:");
			scanf("%d",&y2);
			printf("INPUT (Z) VALUE FOR ARRAY:");
			scanf("%d",&z2);
			for(i=0;i<x2;i++)
			{
				for(j=0;j<y2;j++)
				{
					for(k=0;k<z2;k++)
					{
						B[i][j][k] = 0;
						printf("B[%d][%d][%d] = %d\n",i,j,k,B[i][j][k]);
					}
				}
			}
		}
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