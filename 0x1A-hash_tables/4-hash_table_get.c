#include "hash_tables.h"
/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: Hash Table Argument
 * @key: Key Argument
 *
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	unsigned long int index = 0;

	/*Checking if ht exist*/
	if (ht == NULL)
		return (NULL);
	/*Checking if key exist*/
	if (key == NULL)
	{
		return (NULL);
	}
	/*Getting the index*/
	index = key_index((unsigned char *)key, ht->size);
	/*Checking if the index have elements inside*/
	head = ht->array[index];
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (head->next && head->key != key)
		{
			head = head->next;
		}
		return (head->value);
	}
}
