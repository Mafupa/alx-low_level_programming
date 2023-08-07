#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to new space in memory with s1+s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size = 0;
	char *str;

	if (s1 != NULL)
	{
		for (; s1[i]; i++)
			size++;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++, j++)
			str[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++, j++)
			str[j] = s2[i];
	}
	str[j] = '\0';
	return (str);
}
