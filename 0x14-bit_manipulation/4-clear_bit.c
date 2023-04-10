#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: Start from 0 bit to be set
 * @n: Number pointer
 * Return: 1 (Success), -1 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	k = ~(1 << index);
	*n = *n & k;
	return (1);
}
