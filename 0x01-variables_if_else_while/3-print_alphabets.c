#include <stdio.h>
/**
 * main - Prints the alphabets in lower and upper cases
 *
 * Return: Always (Success)
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	for (k = 'A'; k <= 'Z'; k++)
	{
		putchar(k);
	}
	putchar('\n');

	return (0);
}
