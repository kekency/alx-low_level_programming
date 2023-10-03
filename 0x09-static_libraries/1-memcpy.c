#include "main.h"

/**
 * _memcpy - function tocopy memory location
 * @dest : destination of what to copy
 * @src : source file to be copied in memory
 * @n : unsigned int
 *
 * Return: Always true
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
