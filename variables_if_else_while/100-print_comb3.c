#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 * starting from 0, numbers separated by ,
 * followed by space, printed in ascending order
 * 01 and 10 the same combination of the two digits
 * Return: 0
 */
int main(void)
{
	int num;
	int  x;

	for (num = 48; num <= 56; num++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > num)
			{
				putchar(num);
				putchar(x);
				if (num != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
