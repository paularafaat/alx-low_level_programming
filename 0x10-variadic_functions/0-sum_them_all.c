#include "variadic_functions.h"
/**
 * sum_them_all - fun outputs the sum of all numbers
 * @n: int
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int p = 0;
	int i = n;
	va_list sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(sum, n);
	while (i--)
		p += va_arg(sum, int);
	va_end(sum);
	return (p);
}

