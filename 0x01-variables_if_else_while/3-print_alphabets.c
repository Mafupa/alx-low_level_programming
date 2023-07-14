#include <stdio.h>

/**
 * main - prints the alphabet in lower and upper case
 *
 * Return:0
 */
int main(void)
{
	char cur = 'a';

	for (; cur <= 'z'; cur++)
		putchar(cur);
	for (cur = 'A'; cur <= 'Z'; cur++)
		putchar(cur);
	putchar('\n');
	return (0);
}
