#include "variadic_functions.h"
/**
 * print_strings - fun that prints strings
 * @separator: pointer
 * @n: number of arg
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *st;
	va_list str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(str, char*);
		if (st == NULL)
			printf("(nill)");
		else
			printf("%s", st);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
