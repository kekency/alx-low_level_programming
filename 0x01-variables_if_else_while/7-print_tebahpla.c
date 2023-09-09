#include <stdio.h>
/**
 * main - Prints the alphabets backwards
 *
 * Return: Always (Success)
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
	{
		putchar(k);
		}
	putchar('\n');

	return (0);
}
