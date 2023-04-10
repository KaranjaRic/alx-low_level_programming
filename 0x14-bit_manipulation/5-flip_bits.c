#include "main.h"

/**
 * flip_bits - flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b;
	unsigned long int result, difference;

	a = 0;
	result = 1;
	difference = n ^ m;

	for (b = 0; b < (sizeof(unsigned long int) * 8); b++)
	{
		if (result == (difference & result))
			a++;
		result <<= 1;
	}
	return (a);
}
