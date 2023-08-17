#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (!temp)
			temp = "(nil)";
		if (!separator || (separator && i == 0))
			printf("%s", temp);
		else
			printf("%s%s", separator, temp);
	}
	printf("\n");
	va_end(args);
}
