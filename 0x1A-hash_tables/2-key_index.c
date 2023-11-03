#include "hash_tables.h"

/**
 * key_index - Gives the index of a string based on it's hash
 * @key: the key string
 * @size: size of the array
 * Return: index in the array of the string
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
