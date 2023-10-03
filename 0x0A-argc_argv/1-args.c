#include "main.h"
#include <stdio.h>

/**
 * main - program to print number of arguments passed
 * @argc: argument count
 * @argv: Argument Variable
 *
 * Return: Always Success
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d \n", argc - 1);

	return (0);
}
