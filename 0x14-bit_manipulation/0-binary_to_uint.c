#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: a string with the binary number
 * Return: the number int unsigned int format
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, c = 1, tot = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i--;
	while(b[i])
	{
		if (b[i] == '1')
			tot += c;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
		c *= 2;
		i--;
	}
	return (tot);
}

