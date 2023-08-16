#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name
 * @f: the function used to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
