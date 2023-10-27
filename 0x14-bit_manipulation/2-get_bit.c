#include "main.h"
/**
 * get_bit - gets bit
 * @n: int
 * @index: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
