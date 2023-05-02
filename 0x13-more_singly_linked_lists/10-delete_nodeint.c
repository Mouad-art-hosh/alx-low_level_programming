#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *ent = NULL;
	unsigned int r = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (r < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		r++;
	}
	ent = p->next;
	p->next = ent->next;
	free(ent);
	return (1);
}
