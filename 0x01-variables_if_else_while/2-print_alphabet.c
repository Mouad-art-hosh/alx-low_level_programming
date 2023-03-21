#include <stdio.h>

/**
 * main - main prints the alphabet in lowercase, followed by a new line
 *
 * reaturn: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
