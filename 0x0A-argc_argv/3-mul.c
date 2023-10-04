#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
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
