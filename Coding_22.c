/*Coding_22.c5*/
#include <stdio.h>

main()
{
	float speed;
	int tmp,con;
	char alp;
	con = 1;
	tmp = 1;
	speed = 0.00;

	while (tmp == 1)
	{
		printf("Input your air speed (Knots):");
		scanf("%f", &speed);

		if (speed < 1.00)
		{
			printf("Air speed Description is : Clam\n");
		}
		if (speed >= 1.00 && speed <= 4.00)
		{
			printf("Air speed Description is : Light Air\n");
		}
		if (speed >= 4.00 && speed <= 28.00)
		{
			printf("Air speed Description is : Breeze\n");
		}
		if (speed >= 28.00 && speed <= 48.00)
		{
			printf("Air speed Description is : Gale\n");
		}
		if (speed >= 48.00 && speed <= 63.00)
		{
			printf("Air speed Description is : Storm\n");
		}
		if (speed > 63.00)
		{
			printf("Air speed Description is : Hurricane\n");
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