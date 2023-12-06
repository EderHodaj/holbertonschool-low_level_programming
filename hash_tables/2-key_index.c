#include "hash_tables.h"
/**
 * key_index - sdfsdf
 * @key:sdfsg
 * @size:fsdf
 * Retrun:dsgsdf
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
