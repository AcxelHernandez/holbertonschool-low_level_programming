#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * new line
 * Return: 0
 */

int main(void)
{
	char ch, i;
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
