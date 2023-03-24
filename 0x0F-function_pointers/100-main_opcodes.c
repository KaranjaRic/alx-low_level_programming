#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print the opcodes of this program
 * @a: Address of the main function
 * @n: Number of bytes to be printed
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%.2hhx", a[k]);
		if (k < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 * @argv: Array of pointers to arguments
 * @argc: The number of arguments to be passed to the function
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
