#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (!separator || (separator && i == 0))
			printf("%i", va_arg(args, int));
		else
			printf("%s%i", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
