/*Coding_21.c5*/
#include <stdio.h>

main()
{
	int postcode, con, tmp;
	char alp;
	postcode = 0;
	tmp = 1;
	con = 1;

	while(tmp == 1)
	{
		printf("Input Your Postcode:");
		scanf("%d", &postcode);

		if (postcode == 10120)
		{
			printf("Your city in postcode is Donmuang,Bangkok\n");
		}
		if (postcode == 50180)
		{
			printf("Your city in postcode is Mea Rim,Chiang Mai\n");
		}
		if (postcode == 12110)
		{
			printf("Your city in postcode is Thanyaburi,Pathum Thani\n");
		}
		if (postcode == 65000)
		{
			printf("Your city in postcode is Muang Phisaunlok,Phitsanulok\n");
		}
		if (postcode == 58110)
		{
			printf("Your city in postcode is Sop Moei,Mae Hong Son\n");
		}
		if (postcode != 10120 && postcode != 50180 && postcode != 12110 && postcode != 65000 && postcode != 58110 )
		{
			printf("Error not found your postcode!!\n");
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