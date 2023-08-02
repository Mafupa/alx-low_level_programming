/**
 * helper - helper funtion to find prime number
 * @a: attempt
 * @n: the number
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int a, int n)
{
	if (n % a == 0)
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return (helper(a + 1, n));
}

/**
 * is_prime_number - checks if input is a prime number
 * @n: the number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n < 2)
		return (0);
	else
		return (helper(2, n));
}
