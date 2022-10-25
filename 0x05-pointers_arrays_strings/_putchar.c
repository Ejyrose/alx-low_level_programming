#include <unistd.h>

/**
 * _putchar - writes that char c to stdout
 * @c: the char to printed
 * Return: on success 1
 */ 
int _putchar(char c)

{
	return (write(1, &c, 1));
}
