#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 * starting from 0, only use the putchar twice
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
