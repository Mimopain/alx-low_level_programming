#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of the djb2 algorithm for hashing.
 * @str: The input string to be hashed.
 *
 * Return: The hash value generated using the djb2 algorithm.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
