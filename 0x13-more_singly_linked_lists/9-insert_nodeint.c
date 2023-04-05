#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *j;

	j = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && j != NULL; i++)
		{
			j = j->next;
		}
	}

	if (j == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = j>next;
		j->next = new_node;
	}

	return (new_node);
}
