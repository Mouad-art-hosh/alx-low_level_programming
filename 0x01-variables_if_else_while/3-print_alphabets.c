#include <stdio.h>

/**
 * main -print  alphabest in lowercase and in uppercase followed by a new line
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
