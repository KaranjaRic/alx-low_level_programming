#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number pointer
 * @index: Start from 0 bit to be set
 * Return: 1 (Success), -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	k = 1 << index;
	*n = *n | k;
	return (1);
}
