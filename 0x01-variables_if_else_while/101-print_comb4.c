#include <stdio.h>

/**
 * main - prints all combinaison of three digit numbers
 *
 * Return:0
 */
int main(void)
{
	int c = 0, d = 0, u = 0;

	for (; c <= 9; c++)
	{
		for (d = c + 1; d <= 9; d++)
		{
			for (u = d + 1; u <= 9; u++)
			{
				if (c != 0 || d != 1 || u != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(c + '0');
				putchar(d + '0');
				putchar(u + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
