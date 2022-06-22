#include "main.h"

/**
 * print_numbers - function that prints the numbers 0 - 9
 * Description: print numbers with using _putchar from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
