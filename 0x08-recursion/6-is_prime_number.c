#include "main.h"

/**
 * is_prime_number - check if the number is prime or not
 * @n: number
 *
 * Return: prime or not
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - check if the number is prime or not
 * @n: number
 * @i: iterate
 *
 * Return: prime or not
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) > i)
		return (1);

	return (_prime(n, i + 1));
}
