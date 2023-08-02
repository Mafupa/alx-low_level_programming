/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 is identical to s2, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s2 == '*' && !*(s2 + 1) && !*s1)
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else
		return (0);
}
