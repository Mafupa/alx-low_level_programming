/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: Pointer to the string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char *ltr = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *eq = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ltr[j])
				s[i] = eq[j];
		}
		i++;
	}
	return (s);
}
