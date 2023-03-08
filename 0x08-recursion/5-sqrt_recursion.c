#include "main.h"
#include <stdio.h>

int _sqrt(int n, int k);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the natural square root
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: The number to calculate the square root
 * @k: The iterate number
 * Return: The natural square root
 */

int _sqrt(int n, int k)
{
	int sqrt = k * k;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (k);

	return (_sqrt(n, k + 1));
}
