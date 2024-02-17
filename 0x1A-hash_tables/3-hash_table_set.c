#include "hash_tables.h"

/**
 * hash_table_set - Add element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add.
 * @value: The value.
 *
 * Return: failure - 0 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *c_value;
	unsigned long int index, i;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	c_value = strdup(value);

	for (i = index; ht->array[i] != NULL; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = c_value;
			return (1);
		}
	}
	
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(c_value);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = c_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
