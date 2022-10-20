#include "lists.h"

/**
 * File name - 0-print_list.c
 * Author - Emmanuel Ephraim
 */

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!(h -> str))
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h -> len, h -> str);
		}
		h = h -> next;
		len++;
	}
	return (len);
}
