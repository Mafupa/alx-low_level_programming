#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set of bytes
 * Return: Pointer to first bytes that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
