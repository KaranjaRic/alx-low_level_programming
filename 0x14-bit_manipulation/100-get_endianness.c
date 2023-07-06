#include "main.h"

/**
 * get_endianness - checks endianess
 * Return: 0 if big endian, 1 if otherwise
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
