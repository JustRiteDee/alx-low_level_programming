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
	size_t nelm;

	nelm = 0;

	while (h != NULL)

	{

		if (h->str == NULL)

			printf("[%d] %s\n", 0, "(nil)");

		else

			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		nelm++;

	}

	return (nelem);
}
