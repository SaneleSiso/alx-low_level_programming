#include "lists.h"

/**
 * free_listint - program frees a linked list
 * @head: head of a list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
