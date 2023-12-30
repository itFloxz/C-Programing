/*coding_While_06_17_5*/
#include <stdio.h>

main()
{
	int tmp, con, tmp2, sta, AM, PM;
	char alp, se, time;
	tmp = 1;
	con = 1;
	tmp2 = 0;

	while (tmp == 1)
	{
		while (tmp2 < 1)
		{
			sta = 0;
			printf("Select Your Departure Time or Arrival Time (D/A):");
			scanf(" %c", &se);
			tmp2++;

			while (se == 'D' || se == 'd')
			{
				printf("Plaese Seclect your Departur Time (AM=A) (PM=P):");
				scanf(" %c", &time);
				sta++;
				break;
			}
			while (time == 'A' || time == 'a')
			{
				printf("PLAESE INPUT YOUR TIME (AM) (EX.7.00 = 700):");
				scanf(" %d", &AM);
				sta++;
				break;
			}
			while (AM == 800 && sta == 2)
			{
				printf("Your Arrival Time : 10:16 AM\n");
				break;
			}
			while (AM == 943 && sta == 2)
			{
				printf("Your Arrival Time : 11:52 AM\n");
				break;
			}
			while (AM == 1119 && sta == 2)
			{
				printf("Your Arrival Time : 01:31 PM\n");
				break;
			}
			while (time == 'P' || time == 'p' && sta == 1)
			{
				printf("PLAESE INPUT YOUR TIME (PM) (EX.7.00 = 700):");
				scanf(" %d", &PM);
				sta++;
				break;
			}
			while (PM == 200 && sta == 2)
			{
				printf("Your Arrival Time : 04:08 PM\n");
				break;
			}
			while (PM == 345 && sta == 2)
			{
				printf("Your Arrival Time : 05:55 PM\n");
				break;
			}
			while (se == 'A' || se == 'a' && sta < 1)
			{
				printf("Plaese Seclect your Arrival Time (AM=A) (PM=P):");
				scanf(" %c", &time);
				sta++;
				break;
			}
			while (time == 'A' || time == 'a' && sta == 1)
			{
				printf("PLAESE INPUT YOUR TIME (AM) (EX.7.00 = 700):");
				scanf(" %d", &AM);
				sta++;
				break;
			}
			while (AM == 1016 && sta == 2)
			{
				printf("Your Departure Time : 08:00 AM\n");
				break;
			}
			while (AM == 1152 && sta == 2)
			{
				printf("Your Departure Time : 09:43 AM\n");
				break;
			}
			while (time == 'P' || time == 'p' && sta == 1)
			{
				printf("PLAESE INPUT YOUR TIME (PM) (EX.7.00 = 700):");
				scanf(" %d", &PM);
				sta++;
				break;
			}
			while (PM == 131 && sta == 2)
			{
				printf("Your Departure Time : 11:19 AM\n");
				break;
			}
			while (PM == 300 && sta == 2)
			{
				printf("Your Departure Time : 12:47 PM\n");
				break;
			}
			while (PM == 408 && sta == 2)
			{
				printf("Your Departure Time : 02:00 PM\n");
				break;
			}
			while (PM == 555 && sta == 2)
			{
				printf("Your Departure Time : 03:45 PM\n");
				break;
			}
			while (AM!=800 && AM!=943 && AM!=1119 && AM!=1016 && AM!=1152 && PM!=1247 && PM!=200 && PM!=345 && PM!=131 && PM!=300 && PM!=408 && PM!=555)
			{
				printf("Error not found your flight\n");
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
						tmp2 = 2;
						time = 'r';
				}
						con = 1;
						tmp2 = 0;
		}
	}
}
