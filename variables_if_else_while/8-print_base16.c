#include <stdio.h>

/**
 * main - prints the all numbers of base 16 in lowercase,
 * only use putchar tree times 0-9 a-f
 * Return: 0
 */

int main(void)
{
	char i, ch;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
