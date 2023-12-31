#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: Pointer to the first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	else
		return (&s[i]);
}
