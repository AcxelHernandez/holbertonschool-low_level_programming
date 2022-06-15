#include "main.h"


/**
 * _isalpha - function that checks for alphabetic
 * @c: character checked
 * Description: in lowercase or uppercase
 * Return: 1 is a letter, lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
