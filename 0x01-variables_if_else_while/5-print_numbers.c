#include <stdio.h>
/**
 * main - Prints numbers 0 to 10
 *
 * Return: Always (Successful)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
