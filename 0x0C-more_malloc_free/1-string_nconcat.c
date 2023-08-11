#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 * Return: Pointer to the concatenated string, NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, size1 = 0;

	while (s1[size1])
		size1++;
	str = malloc(sizeof(char) * (size1 + n) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[j] = '\0';
	return (str);


}
