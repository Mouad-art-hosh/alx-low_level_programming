#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *a = head;

	if (!head)
		return (NULL);
	while (s && a && a->next)
	{
		a = a->next->next;
		s = s->next;
		if (a == s)
		{
			s = head;
			while (s != a)
			{
				s = s->next;
				a = a->next;
			}
			return (a);
		}
	}
	return (NULL);
}
