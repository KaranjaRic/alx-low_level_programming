#include "main.h"

/**
 * set_bit - value of a bit to 1 at a given index
 * @n: pointer num
 * @index: starting from 0 of the bit you want to set
 * Return: 1 (Success), -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	j = 1 << index;
	*n = *n | j;
	return (1);
}
