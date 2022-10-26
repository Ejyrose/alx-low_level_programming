#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: the length of the string
 */
void _puts(char *str[i])
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
	
