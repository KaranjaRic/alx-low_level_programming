#include "main.h"
#include <stdio.h>

int check_prime(int n, int j);

/**
 * is_prime_number - Returns if a number is prime
 * @n: The number to be checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Checks if number is prime
 * @n: The number to be checked
 * @j: The iteration times
 * Return: 1 for prime or 0 composite
 */

int check_prime(int n, int j)
{
	if (n <= 1)
		return (0);
	if (n % j == 0 && j > 1)
		return (0);
	if ((n / j) < j)
		return (1);

	return (check_prime(n, j + 1));
}
