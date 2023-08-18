#include "variadic_functions.h"

/**
 * print_strings - Prints strings & followed by a new line
 * @separator: string
 * @n: int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list text;
	char *str;
	unsigned int i;

	va_start(text, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(text, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(text);
}
