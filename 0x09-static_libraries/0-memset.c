/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: byte to fill
 * @n: size of memory filled
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
