#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return:0
 */
int main(void)
{
	char cur = 'a';

	for (; cur <= 'z'; cur++)
	{
		if (cur != 'e' && cur != 'q')
			putchar(cur);
	}
	putchar('\n');
	return (0);
}
