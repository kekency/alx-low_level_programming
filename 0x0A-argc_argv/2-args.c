#include "main.h"
#include <stdio.h>

/**
 * main - A program to print all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: always true
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
