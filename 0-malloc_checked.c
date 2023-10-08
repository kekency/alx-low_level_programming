#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function to create a memory
 * @b: unsigned integer
 *
 * Return: always true
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
