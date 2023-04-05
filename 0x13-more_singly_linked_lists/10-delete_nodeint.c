#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: pointer to pointer to the head of linked list.
 * @index:index of the node that should be deleted. Index starts at 0.
 *
 * Return:  1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	while (i != index - 1 && tmp->next != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index - 1 && tmp->next != NULL)
	{
		temp = tmp->next;
		tmp->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
