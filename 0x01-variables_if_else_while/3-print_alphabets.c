#include <stdio.h>

/**
 * main - printing the  alphabet in lowercase, and then in uppercase,
 *
 * Retuen: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
