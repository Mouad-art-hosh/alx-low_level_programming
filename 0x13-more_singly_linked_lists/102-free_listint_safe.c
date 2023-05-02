#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int f;
	listint_t *p;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		f = *h - (*h)->next;
		if (f > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
