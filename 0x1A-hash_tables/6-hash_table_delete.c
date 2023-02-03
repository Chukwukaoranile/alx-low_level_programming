#include "hash_tables.h"
/**
 * hash_table_delete - A function that deletes a hash table
 *
 * @ht: Hash Table Argument
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head = NULL;
	unsigned long int i = 0;

	/*Checking if ht exist*/
	if (ht == NULL)
	{
		return;
	}
	while (i < ht->size)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			recursive_delete(head);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/**
 * recursive_delete - function that use the recursion to delete hash table
 *
 * @node: Node Argument
 */
void recursive_delete(hash_node_t *node)
{
	if (node->next)
	{
		recursive_delete(node->next);
	}
	free(node->key);
	free(node->value);
	free(node);
}
