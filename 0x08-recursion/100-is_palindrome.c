#include "main.h"

/**
 * helper - helper function for finding palindrome
 * @s: the start
 * @e: the end
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int helper(char *s, char *e)
{
	if (s >= e)
		return (1);
	else if (*s != *e)
		return (0);
	else
		return (helper(s + 1, e - 1));
}


/**
 * is_palindrome - checks if string is a palindrome
 * @s: the string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *e = s;

	while (*e)
		e++;
	e--;
	return (helper(s, e));
}
