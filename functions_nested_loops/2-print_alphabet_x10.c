#include "main.h"


/**
 * print_alphabet_x10 - Prints 10 times the alphabet.
 * Description: in lowercase, followed by a new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char l;

	while (x++ <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
