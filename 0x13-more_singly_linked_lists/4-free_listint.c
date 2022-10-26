#include "lists.h"

/**
 * File name - 4-free_listint.c
 * Author - Emmanuel Ephraim
 */
 
/**
 * free_listint - Frees a listint_t list
 * @head: Head of the list
 **/
void free_listint(listint_t *head)
{
	listint_t *aux;

	for (; head != NULL;)
	{
		aux = head;
		head = head->next;
		free(aux);
	}

}
