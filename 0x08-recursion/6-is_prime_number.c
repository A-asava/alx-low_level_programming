#include <stdio.h>
#include "main.h"


/**
 * is_prime - checks whether a given number is prime or not
 * @n: the number to be checked
 * @i: the current divisor to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime(int n, int i)
{
	if (n < 2)
	return (0);
	if (i == 1)
	return (1);
	if (n % i == 0)
	return (0);

	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - checks whether a given number is prime or not
 * @n: the number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	return (is_prime(n, n - 1));
}

