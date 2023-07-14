#include <stdio.h>

/**
 * main - prints the base 16 alphabet
 *
 *
 * Return:0
 */
int main(void)
{
	int n = 0;
	char cur = 'a';

	for (; n <= 9; n++)
		putchar(n + '0');
	for (; cur <= 'f'; cur++)
		putchar(cur);
	putchar('\n');
	return (0);
}
