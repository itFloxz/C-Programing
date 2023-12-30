/*coding_While_05_16.c5*/
#include <stdio.h>

main()
{
	float speed, con, tmp;
	char alp;
	con = 1;
	tmp = 1;
	speed = 0.00;

	while (tmp == 1)
	{
		printf("Input your air speed (Knots):");
		scanf("%f", &speed);

		while (speed < 1.00)
		{
			printf("Air speed Description is : Clam\n");
			break;
		}
		while (speed >= 1.00 && speed < 4.00)
		{
			printf("Air speed Description is : Light Air\n");
			break;
		}
		while (speed >= 4.00 && speed < 28.00)
		{
			printf("Air speed Description is : Breeze\n");
			break;
		}
		while (speed >= 28.00 && speed < 48.00)
		{
			printf("Air speed Description is : Gale\n");
			break;
		}
		while (speed >= 48.00 && speed <= 63.00)
		{
			printf("Air speed Description is : Storm\n");
			break;
		}
		while (speed > 63.00)
		{
			printf("Air speed Description is : Hurricane\n");
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