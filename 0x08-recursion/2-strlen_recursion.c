/**
 * _strlen_recursion - returs the length of a string
 * @s: the string
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
