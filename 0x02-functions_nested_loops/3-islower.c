#include "main.h"

/**
 * _islower - prints all lowercase characters
 *
 * return: 1 if c is lower, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
