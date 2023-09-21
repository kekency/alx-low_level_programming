#include "main.h"
#include <stdio.h>

/**
 * cap_string - function to make letters to uppercase
 * @s: character input
 *
 * Return: char value
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspch = 13;
	char spch[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
	while (s[a])
	{
		i = 0;

		while (i < cspch)
		{
			if ((a == 0 || s[a - 1] == spch[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return(s);
}
