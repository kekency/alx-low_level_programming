#include "main.h"

/**
 * factorial - function to handle factorial
 * @n: character to be recursed
 *
 * Return: Always Zero
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
