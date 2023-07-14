#include <stdio.h>

/**
 * main - prints all combinaison of single digit numbers
 *
 * Return:0
 */
int main(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
