#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes that char c to stdout
 * @c: the char to print
 * Returns: 1 else 1
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}
