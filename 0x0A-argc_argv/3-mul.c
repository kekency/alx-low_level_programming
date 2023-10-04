#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Program to multiply numbers received as arguments
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0 when true, 1 when false
 */
int main(int argc, char *argv[])
{
	int y = 0, z = 0;

	if (argc == 3)
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);
		printf("%d\n", y * z);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
       	
}
