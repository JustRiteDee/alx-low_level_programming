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
	list_t *cur_node;

	while ((cur_node = head) != NULL)

	{

		head = head->next;

		free(cur_node->str);

		free(cur_node);

	}
}
