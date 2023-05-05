#include "main.h"

/**
 * binary_to_unit - Converts binary num to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: Converted num or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k;
	int j;

	k = 0;
	if (!b)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (j = 0; b[j] != '\0'; j++)
	{
		k <<= 1;
		if (b[j] == '1')
			k += 1;
	}
	return (k);
}
