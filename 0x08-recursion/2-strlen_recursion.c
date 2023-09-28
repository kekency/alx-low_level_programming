#include "main.h"

/**
 * _strlen_recursion - function to print the lenght of a string
 * @s: character to test individual string
 *
 * Return: Always true
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
