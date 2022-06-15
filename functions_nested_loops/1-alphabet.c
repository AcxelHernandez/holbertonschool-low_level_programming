#include "main.h"


/**
 * main - function that prints the alphabet,
 * in lowercase, followed by a new line
 * print_alphabet - prints the alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
