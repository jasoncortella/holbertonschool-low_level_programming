# 0x19. C - Hash tables
## This directory contains answer files to Holberton School Project Low Level Programming Project 0x19

### 0. >>> ht = {}
* a function that creates a hash table
* Prototype: hash_table_t *hash_table_create(unsigned long int size);
* File: 0-hash_table_create.c

### 1. djb2
* a hash function implementing the djb2 algorithm
* Prototype: unsigned long int hash_djb2(const unsigned char *str);
* File: 1-djb2.c

### 2. key -> index
* a function that gives you the index of a key.
* Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
* File: 2-key_index.c

### 3. >>> ht['betty'] = 'holberton'
* a function that adds an element to the hash table.
* Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
* File: 3-hash_table_set.c

### 4. >>> ht['betty']
* a function that retrieves a value associated with a key
* Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
* File: 4-hash_table_get.c

### 5. >>> print(ht)
* a function that prints a hash table.
* Prototype: void hash_table_print(const hash_table_t *ht);
* File: 5-hash_table_print.c

### 6. >>> del ht
* a function that deletes a hash table.
* Prototype: void hash_table_delete(hash_table_t *ht);
* File: 6-hash_table_delete.c