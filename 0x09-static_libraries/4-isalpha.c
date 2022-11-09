#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: is the letter to be checked
 *
 * Return:  1 if char is a letter else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
