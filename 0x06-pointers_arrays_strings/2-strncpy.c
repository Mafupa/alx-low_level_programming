/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: source bytes
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i <= n && src[i]; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = '\0';
	return (dest);
}
