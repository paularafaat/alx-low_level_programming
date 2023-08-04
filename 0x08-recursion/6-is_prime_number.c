#include "main.h"
/**
 * int is_prime_number - checkout if n is a priime number
 * @n: int
 * @y: int
 * Return: 1 if n is a prime number, 0 if not
 */
int check_number(int n, int y);
int is_prime_number(int n)
{
	return (check_number(n, 2));
}
/**
 * check_number - checkout all number of n if it they divide it
 * @n: int
 * @y: int
 * Return: 1 if n is a prime number, 0 if not
 */
int check_number(int n, int y)
{
	if (y >= n && n > 1)
		return (1);
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (check_number(n, y + 1));
}
