#include <stdio.h>

/**
 * main - prints two by two combinaison of two digit numbers
 *
 * Return:0
 */
int main(void)
{
	int n = 0, m = 1;

	for (; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			if (n != 0 || m != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n / 10 + '0');
			putchar(n % 10 + '0');

			putchar(' ');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');

		}
	}
	putchar('\n');
	return (0);
}
