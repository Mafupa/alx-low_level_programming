#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char hello[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(hello[i]);
	}
	return (0);
}
