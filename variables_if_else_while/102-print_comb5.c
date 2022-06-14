#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int i;
	int x;
	int j;

	for (a = 48; a < 58; a++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			x = a;
			for (; x < 58; x++)
			{
				for (; j < 58; j++)
				{
					putchar(a);
					putchar(i);
					putchar(' ');
					putchar(x);
					putchar(j);
					if (a != 57 || x != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
