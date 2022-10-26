#include "lists.h"

/**
 * File name - 8-sum_listint.c
 * Author - Emmanuel Ephraim
 */
 
/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list
 * @head: Head of the list
 *
 * Return: Sum
 **/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;

	return (sum);
}
