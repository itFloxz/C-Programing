/*Coding_27.c*/
#include <stdio.h>

int check(int con);

int main()
{
    check(10 < 15);
    check(99 > 100);
}

int check(int con)
{
    if (con)
    {
        printf("Condition is true.\n");
    }
    else
    {
        printf("Condition is false.\n");
    }
}