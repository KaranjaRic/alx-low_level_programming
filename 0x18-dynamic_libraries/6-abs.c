#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @c: parameter to be checked
 *
 * Return: always c (Success)
 */

int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
