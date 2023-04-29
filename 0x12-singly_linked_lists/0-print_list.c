#include "lists.h"

/**
 * _strlin - returns the length of a string
 *
 * @s: the string whose length to check
 * Return: int length of string
 */

int _strlen(char *s)
{
	int k = 0;

	if (!s)
		return (0);
	while (*s++)
		k++;
	return (K);
}
/**
 * print_list - prints a linked lists
 *
 * @h:pointer to first node
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("[%d]%s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++
	}
	return (k);
}