#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * print all the letters except q and e
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' &&  ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
