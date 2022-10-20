#include "lists.h"

/**
 * File name - 4-free_list.c
 * Author - Emmanuel Ephraim
 */
 
 
/**
 * free_list - Frees a list_t list
 * @head: Start of the list
 **/
 
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
