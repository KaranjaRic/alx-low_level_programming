#include "main.h"
#include <stdio.h>

/**
 * main - Prints te number of args
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
