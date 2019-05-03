# 0x16. C - Doubly linked lists
## This directory contains answer files to project 0x16

### 0. Print list
* a function that prints all the elements of a dlistint_t list.
* Prototype: size_t print_dlistint(const dlistint_t *h);
* File: 0-print_dlistint.c

### 1. List length
* a function that returns the number of elements in a linked dlistint_t list.
* Prototype: size_t dlistint_len(const dlistint_t *h);
* File: 1-dlistint_len.c

### 2. Add node
* a function that adds a new node at the beginning of a dlistint_t list.
* Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
* File: 2-add_dnodeint.c

### 3. Add node at the end
* a function that adds a new node at the end of a dlistint_t list.
* Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
* File: 3-add_dnodeint_end.c

### 4. Free list
* a function that free a dlistint_t list.
* Prototype: void free_dlistint(dlistint_t *head);
* File: 4-free_dlistint.c

### 5. Get node at index
* a function that returns the nth node of a dlistint_t linked list.
* Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
* File: 5-get_dnodeint.c

### 6. Sum list
* a function that returns the sum of all the data (n) of a dlistint_t linked list.
* Prototype: int sum_dlistint(dlistint_t *head);
* File: 6-sum_dlistint.c

### 7. Insert at index
* a function that inserts a new node at a given position.
* Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
* Files: 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c

### 8. Delete at index
* a function that deletes the node at index index of a dlistint_t linked list.
* Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
* File: 8-delete_dnodeint.c

### 9. Crackme4
* Finds the password for [crackme4](https://github.com/holbertonschool/0x16.c).
* File: 100-password

### 10. Palindromes
* Find the largest palindrome made from the product of two 3-digit numbers.
* File: 102-result

### 11. crackme5
* Write a keygen for [crackme5](https://github.com/holbertonschool/0x16.c).
* Usage of the crackme: ./crackme5 username key
* Usage for keygen: ./keygen5 username
* File: 103-keygen.c