#include "deck.h"

/**
 * get_val - gets the relative value of a card from it's string value
 * @str: string value of the card
 * Return: Converted suit/card value of the card (1-52)
 *         Exits with a status of -1 invalid card specified
 */
int get_val(deck_node_t *node)
{
	int i;
	char *array[13] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
			   "10", "Jack", "Queen", "King"};

	for (i = 0; i < 13; i++)
		if (strcmp(node->card->value, array[i]) == 0)
			return ((i + 1) + 13 * node->card->kind);
	exit(-1);
}

/**
 * swap_next - swaps a node of a linked list with it's next node
 * @node: node to define swap point
 */
void swap_next(deck_node_t **node)
{
	deck_node_t *current, *next, *prev, *next2;

	current = *node;
	next = current->next;
	prev = current->prev;
	if (next->next)
		next2 = next->next;
	else
		next2 = NULL;
	prev = current->prev;
	current->prev = next;
	current->next = next2;
	next->prev = prev;
	next->next = current;
	if (next2)
		next2->prev = current;
	if (prev)
		prev->next = next;
}

/**
 * sort_deck - sorts a deck of cards in linked list form using Bubble sort
 * @deck: double pointer to the deck to sort
 */
void sort_deck(deck_node_t **deck)
{
	int cv1, cv2;
	deck_node_t *current;
	bool swap = true;

	if (!deck || !*deck || !(*deck)->next)
		return;
	while (swap)
	{
		swap = false;
		current = *deck;
		while (current->next)
		{
			cv1 = get_val(current);
			cv2 = get_val(current->next);
			if (cv1 < cv2)
				current = current->next;
			else
			{
				swap_next(&current);
				if (current == *deck)
					*deck = current->prev;
				swap = true;
			}
		}
	}
}
