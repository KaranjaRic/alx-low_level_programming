#include "main.h"

/**
 * _power - Calculate base and power
 * @pow: Power of exponent
 * @base: Base of exponent
 * Return: Base and power value
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned int k;
	unsigned long int num;

	num = 1;
	for (k = 1; k <= pow; k++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints binary representation of a number
 * @n: number to be represented
 * Return: void
 */

void print_binary(unsigned long int n)
{
	char flag;
	unsigned long int result, dev;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}

		dev >>= 1;
	}
}
