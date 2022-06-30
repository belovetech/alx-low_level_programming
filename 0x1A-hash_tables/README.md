# Hash tables

## Data Structures

Please use these data structures for this project:

```text
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

```

### PS

This is a project done during Full Stack Software Engineering studies at ALX_AFRICA. The objectives of the project is to teach ALX-SE students about Hash tables Data Structures, how do they work and how to use them, What is a collision and what are the main ways of dealing with collisions in the context of a hash table, advantages and drawbacks of using hash tables, the most common use cases of hash tables.
