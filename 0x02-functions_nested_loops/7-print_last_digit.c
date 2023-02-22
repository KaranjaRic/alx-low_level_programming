#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @j: function parameter
 *
 * Return: i
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
		i = -i;
	return (i);
}
