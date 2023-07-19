#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Returnm: 0n success 1.On error, -1 is returned, and errno is set appropertely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
