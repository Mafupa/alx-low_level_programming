
/**
 * helper - helper for square root
 * @a: attempt
 * @n: the number
 * Return: square root
 */
int helper(int a, int n)
{
	if (a * a == n)
		return (a);
	else if (a * a > n)
		return (1);
	else
		return (helper(a + 1, n));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number
 * Return: the square root, -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helper(1, n));
}
