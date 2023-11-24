#include "main.h"
#include <string.h>
/**
 * binary_to_uint - fun to convert binary to unsigned int
 * @b: pointer to char
 * Return: uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	size_t lenght = strlen(b);

	for  (size_t i = 0; i < lenght; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '1')
		{
			result = result << 1;
		}
	}
	return (result);
}
