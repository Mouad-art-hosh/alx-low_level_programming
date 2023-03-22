#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: always 0
 */


void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1 ; i <= 10 ; i++)
		{
			for (c = 'a' ; c <= 'z' ; c++)
			_putchar(c);
				_putchar('\n');
		}
}
