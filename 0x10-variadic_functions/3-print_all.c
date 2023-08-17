#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints all
 * @format: list of types of argument passed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *temp, *comma = "";
	va_list args;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", comma, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(args, double));
					break;
				case 's':
					temp = va_arg(args, char *);
					if (!temp)
						temp = "(nil)";
					printf("%s%s", comma, temp);
					break;
				default:
					i++;
					continue;
			}
			i++;
			comma = ", ";
		}
	}
	printf("\n");
	va_end(args);
}
