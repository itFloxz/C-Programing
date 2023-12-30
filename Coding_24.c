/*Coding_24*/
#include <stdio.h>
#include <math.h>

double plus(double a, double b);

double minus(double a, double b);

double multiply(double a, double b);

double divide(double a, double b);

double modulus(double a, double b);

main()
{
    char operator, alp;
    int con,tmp;
    double num1, num2, result;
    con = 1;
	tmp = 1;
		while(tmp == 1)
		{
    		printf("Enter an operator (+, -, *, /, %): ");
    		scanf(" %c", &operator);

    		printf("Enter two numbers: ");
    		scanf("%lf %lf", &num1, &num2);

    		switch (operator)
    		{
    		case '+':
    		    result = plus(num1, num2);
    		    break;
    		case '-':
    		    result = minus(num1, num2);
    		    break;
    		case '*':
    		    result = multiply(num1, num2);
    		    break;
    		case '/':
    		    result = divide(num1, num2);
    		    break;
    		case '%':
    		    result = modulus(num1, num2);
    		    break;
    		default:
    		    printf("Error: Invalid operator.\n");
    		    return 1;
    }
    printf("Result: %.2lf\n", result);
    tmp = 2;
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
	tmp = 1;
	con = 1;
}

double plus(double a, double b)
{
    return a + b;
}

double minus(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

double modulus(double a, double b)
{
    if (b != 0)
    {
        return fmod(a, b);
    }
    else
    {
        printf("Error: Modulus by zero is not allowed.\n");
        return 0;
    }
}