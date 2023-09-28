#include "main.h"

/**
 * _puts_recursion - function to print string followed by a new line
 * @s: Character to be inserted
 *
 * Return: Always true
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
