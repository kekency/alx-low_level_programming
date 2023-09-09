#include <stdio.h>
/**
 * main - Prints alphabets in lowercase except e and q
 *
 * Return: Always (Success)
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q') 
		{
			putchar(k);
		}
	}
	putchar('\n');

	return (0);
}
