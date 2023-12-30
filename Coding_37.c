/*Coding_37*/
#include <stdio.h>
#define maxsize 20

main()
{
    int A[maxsize][maxsize][maxsize];
    int x1, y1, z1, i, j, k;
    int tmp, con, sum;
    int *ptr = &A[0][0][0];
    char alp;
    tmp = 1;

    while (tmp == 1)
    {
        con = 1;
        sum = 0;
        printf("INPUT X VALUE FOR 3DARRAY: ");
        scanf(" %d", &x1);
        printf("INPUT Y VALUE FOR 3DARRAY: ");
        scanf(" %d", &y1);
        printf("INPUT Z VALUE FOR 3DARRAY: ");
        scanf(" %d", &z1);

        for (i = 0; i < x1; i++)
        {
            for (j = 0; j < y1; j++)
            {
                for (k = 0; k < z1; k++)
                {
                    printf("INPUT VALUE IN A{%d}[%d][%d]: ", i, j, k);
                    scanf(" %d", &A[i][j][k]);
                }
            }
        }
        for (i = 0; i < x1; i++)
        {
            for (j = 0; j < y1; j++)
            {
                for (k = 0; k < z1; k++)
                {
                    sum += *(ptr);
                }
            }
        }
        printf("SUM Array: %d\n", sum);

        while (con == 1)
        {
            printf("Do you want to exit? :(Y/N):");
            scanf(" %c", &alp);

            while (alp == 'Y' || alp == 'y')
            {
                return 0;
            }
            tmp = 1;
            con = 2;
        }
    }
}