#include "main.h"
int prime_check(int n, i);
/**
 *  is_prime_number - says if an integer is a prime number or not
 * @n: integer
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
/**
 * prime_check - check if number is prime
 * @n: integer
 * @i: integer
 * Return: 1 if n is prime, 0 if not
 */

int prime_check(int n, i)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	return (prime_check(n, i + 1));
}
