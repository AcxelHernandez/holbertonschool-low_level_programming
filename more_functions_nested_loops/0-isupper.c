#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input int  checks
 * Return: 1 if c is uppercase, 0 otherwise
 * similar function: isupper
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
