#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 * starting from 0, numbers separated by ,
 * followed by space, printed in ascending order
 * Return: 0
 */

int main(void)
{

	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);

		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
