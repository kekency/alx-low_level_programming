#include "main.h"

/**
 * _print_rev_recursion - function to print reverse recurion
 * @s: character to be reversed
 *
 * Return: Always true
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
