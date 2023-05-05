#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *c;
	int j;

	j = 1;
	c = (char *)&j;

	return (*c);
}
