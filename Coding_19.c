/*Coding_19.c*/
#include <stdio.h>

main()
{
	int i, num, count, min, max, con, tmp;
	char alp;
	tmp = 1;
	con = 1;

	while (tmp == 1)
	{
		printf("Please Enter the Minimum Values :");
		scanf("%d", &min);
		printf("\nPlease Enter the Maximum Values :");
		scanf("%d", &max);

		printf("Numbers Between %d and %d :\n", min, max);

		if (max == min)
		{
			printf("Error The minimum value cannot be equal to the maximum value.\n");
			return 0;
		}
		if (min > max)
		{
			printf("Error The minimum value is larger than the maximum value.\n");
			return 0;
		}
		if (max < 0 || min < 0)
		{
			printf("Error The minimum value and maximum value should not be less 0.\n");
			return 0;
		}
		while(min <= max)
		{
			count = 0;
			i = 2;
			while (i <= min / 2)
			{
				if (min % i == 0)
				{
					count++;
					break;
				}
				i++;
			}
			if (count == 0 && min != 1)
			{
				printf(" %d ", min);
			}
			min++;
		}
		while (con == 1)
		{
			printf("\nDo you want to exit? :(Y/N):");
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