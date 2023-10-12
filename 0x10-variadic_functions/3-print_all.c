#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sepa = "";

	va_list prt;

	va_start(prt, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sepa, va_arg(prt, int));
					break;
				case 'i':
					printf("%s%d", sepa, va_arg(prt, int));
					break;
				case 'f':
					printf("%s%f", sepa, va_arg(prt, double));
					break;
				case 's':
					st = va_arg(prt, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sepa, st);
					break;
				default:
					i++;
					continue;
			}
			sepa = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(prt);
}

