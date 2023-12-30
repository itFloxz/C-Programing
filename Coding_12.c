/*Coding_While_01_12.c_3*/
#include <stdio.h>

main()
{
	int number1, number2, total, tmp, tmp2, con, con2;
	char alp;
	tmp = 1;
	con = 1;

	while (tmp == 1)
	{
		printf("Input your frist number:");
		scanf("%d", &number1);
		printf("Input your second number:");
		scanf("%d", &number2);
		total = number1 + number2;

		while (total > 52)
		{
			printf("Your anserw:%d\n",total);
			printf("your result higher 52\n");
			break;
		}

		while (total < 52)
		{
			printf("Your anserw:%d\n",total);
			printf("Your result less than 52\n");
			break;
		}

		while (total == 52)
		{
			printf("Your anserw:%d\n",total);
			printf("Your result is 52\n");
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
