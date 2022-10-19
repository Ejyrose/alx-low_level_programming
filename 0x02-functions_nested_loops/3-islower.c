#include "main.h"
/**
 * _islower - check for lowercase char
 * @c: is the char checked
 * Return: 1 if char is lowercase, otherwise return 0.
 */

int _islower(int c)
{
	if (c  >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
