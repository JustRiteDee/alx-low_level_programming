#include "lists.h"

/**
 * File name - 1-list_len.c
 * Author - Emmanuel Ephraim
 */
 
/**
 * list_len - returns then number of elements in a list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)

	{

		h = h->next;

		i++;

	}

	return (i);
}

