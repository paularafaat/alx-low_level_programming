#include "main.h"

/**
 * factorial - returns the factorial of a number given
 * @n: number to return the factorial value
 *
 * Return: factorial of the int n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
