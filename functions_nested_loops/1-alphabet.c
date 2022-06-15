#include "main.h"


/**
 * main - function that prints the alphabet,
 * in lowercase, followed by a new line
 * Description: print_alphabet is prints the alphabet
 * print_alphabet - prints
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
