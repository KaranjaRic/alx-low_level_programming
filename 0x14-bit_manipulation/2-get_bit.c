#include "main.h"

/**
 * get_bit - Returns value of bit at given index
 * @n: check bit
 * @index: Which to check bit
 * Return: Value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int res, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);


	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
