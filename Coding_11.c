/*Coding_11.c5*/
#include<stdio.h>
#include <math.h>
main()
{
	int select,con,tmp,count,tmp2,w;
	int x,y;
	float sum,allsum;
	tmp = 1;
	con = 0;
	w=1;
	while(tmp == 1)
	{
		while(tmp2 < 1)
		{
			printf("\n---- walk time %d ----",w);
			x=0;
			y=0;
			printf("\nDirection from numpad\n");
			printf("Start At x=0 y =0\n");
			printf("1.Southwest\n2.South\n3.Southeast\n4.West\n");
			printf("6.East\n7.Northwest\n8.North\n9.Northeast\n");
			printf("Select your direction from numpad or you want exit(5) :");
			scanf(" %d",&select);

			if(select == 1)
			{
				x--;
				y--;
			}
			else if(select == 2)
			{
				y--;
			}
			else if(select == 3)
			{
				x++;
				y--;
			}
			else if(select == 4)
			{
				x--;
			}
			else if(select == 6)
			{
				y++;
			}
			else if(select == 7)
			{
				x--;
				y++;
			}
			else if(select == 8)
			{
				y++;
			}
			else if(select == 9)
			{
				x++;
				y++;
			}
			else if(select == 5)
			{
				return 0;
			}
			sum = pow(x, 2) + pow(y, 2);
			allsum = sqrt(sum);
			printf("x : %d ", x);
			printf("\nY : %d", y);
			printf("\nDistance from Starting piont to End point : %0.3f\n",allsum);
			printf("-----------------------------------------------------------\n");
			tmp2++;
			w++;
		}

		tmp2 = 0;
	}
}