#include <unistd.h>
/**
 * _putchr - write the character c to stout
 *
 * return: on success 1.
 * on error, 1 is returned, and error is set appropriately.
 *
 */
int _putchar(char C)
{
	return (write(1, &c, 1));
}
