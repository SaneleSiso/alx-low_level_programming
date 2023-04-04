#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;
	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	i = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (i);
}
