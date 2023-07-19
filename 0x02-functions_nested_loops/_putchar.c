#include <unistd.h>
#include "main.h"
/**
 * _putchar - write the character c to stdout
 * @C: the charactar to print
 *
 * return: on success 1.
 * 	on error, -1 is returned, and error is setv
*/
int _putchar(char c)
{
return (write (1, &c. 1));
}
