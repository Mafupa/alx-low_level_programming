#include <stdio.h>

/**
 * main - prints all combinaison of two digit numbers
 *
 * Return:0
 */
int main(void)
{
	int n = 0, ad = 0;

	for (; n <= 9; n++)
	{
		for (ad = n + 1; ad <= 9; ad++)
		{
			if (n != 0 || ad != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n + '0');
			putchar(ad + '0');
		}
	}
	putchar('\n');
	return (0);
}
