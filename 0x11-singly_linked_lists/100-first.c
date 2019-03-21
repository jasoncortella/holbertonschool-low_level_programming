#include "lists.h"

/**
 * printFirst - prints text before the execution of the main function
 * Apply the constructor attribute to printFirst() so that it
 * is executed before main()
 * Return: nothing
 */
void printFirst(void) __attribute__ ((constructor));
void printFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
