/*Coding_While_03_145*/
#include<stdio.h>
main()
{
	char charac1, charac2, charac3, charac4, charac5, space, alp;
	int con, tmp;
	tmp = 1;
	con = 1;

	while (tmp == 1)
	{
		printf("PLAESE INPUT FRIST CHARACTER:");
		scanf(" %c%c%c%c%c",&charac1,&charac2,&charac3,&charac4,&charac5);
		{
			while (charac1 > charac2 || charac2 > charac3 || charac3 > charac4 || charac4 > charac5)
			{
				while (charac1 > charac2)
				{
					space = charac1;
					charac1 = charac2;
					charac2 = space;
					break;
				}

				while (charac2 > charac3)
				{
					space = charac2;
					charac2 = charac3;
					charac3 = space;
					break;
				}

				while (charac3 > charac4)
				{
					space = charac3;
					charac3 = charac4;
					charac4 = space;
					break;
				}

				while (charac4 > charac5)
				{
					space = charac4;
					charac4 = charac5;
					charac5 = space;
				}
			}
			printf("YOUR SORT CHARACT : %c,%c,%c,%c,%c\n", charac1, charac2, charac3, charac4, charac5);
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
		con = 1;
		tmp = 1;
	}
}