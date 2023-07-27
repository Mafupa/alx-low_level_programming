/**
 * leet - encodes a string into 1337.
 * @s: the string
 * Return: Pointer to the string
 */
char *leet(char *s)
{
	int i = 0, j;
	char *ltr = "aAeEoOtTlL";
	char *eq = "4433007711";

	while (s[i])
	{
		for(j = 0; j < 10; j++)
		{
			if (s[i] == ltr[j])
				s[i] = eq[j];
		}
	}
	return (s);
}
