#include "main.h"

/**
 * _pow_recursion - function to return value of x raised to the power of y.
 * @x: base integer
 * @y: power of x
 *
 * Return: Always True
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); 
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
