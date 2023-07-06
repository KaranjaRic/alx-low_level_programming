#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int k;
	unsigned int i;

	k = 0;
	result = 1;
	difference = n ^ m;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & result))
			k++;
		result <<= 1;
	}
	return (k);
}
