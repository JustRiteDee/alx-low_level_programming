#include "lists.h"

/**
 * File name - 103-find_loop.c
 * Author - Emmanuel Ephraim
 */
 
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head of the list
 *
 * Return: Node when start the loop
 **/
listint_t *find_listint_loop(listint_t *head)
{

	while (head != NULL)
	{
		if (head <= head->next)
			return (head);

		head = head->next;
	}

	return (NULL);
}
