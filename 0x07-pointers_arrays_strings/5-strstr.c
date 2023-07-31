#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i+j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
