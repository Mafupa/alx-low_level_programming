#include "main.h"

/**
 * _islower - check if c is in lowercase
 *@c: the character
 *
 * Return: 1 if in lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
