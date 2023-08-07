#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: NULL if str is NULL, pointer to the string otherwise
 */
char *_strdup(char *str)
{
	char *newstr;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		size++;
		i++;
	}
	newstr = malloc(sizeof(char) * size + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = str[i];
	return (newstr);
}
