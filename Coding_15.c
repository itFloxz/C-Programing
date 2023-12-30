/*coding_While_04_15 5.c*/
#include <stdio.h>

main()
{
	int postcode, con, tmp;
	char alp;
	postcode = 0;
	tmp = 1;
	con = 1;

	while (tmp == 1)
	{
		printf("Input Your Postcode:");
		scanf("%d", &postcode);

		while (postcode == 10120)
		{
			printf("Your city in postcode is Donmuang,Bangkok\n");
			break;
		}
		while (postcode == 50180)
		{
			printf("Your city in postcode is Mea Rim,Chiang Mai\n");
			break;
		}
		while (postcode == 12110)
		{
			printf("Your city in postcode is Thanyaburi,Pathum Thani\n");
			break;
		}
		while (postcode == 65000)
		{
			printf("Your city in postcode is Muang Phisaunlok,Phitsanulok\n");
			break;
		}
		while (postcode == 58110)
		{
			printf("Your city in postcode is Sop Moei,Mae Hong Son\n");
			break;
		}
		while (postcode != 10120 && postcode != 50180 && postcode != 12110 && postcode != 65000 && postcode != 58110 )
		{
			printf("\nError not found your postcode!!\n");
			break;
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
