#include <stdio.h>

/**
 * main - made the natural numbers; All else is the work of women
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			{
				sum = sum + i;
			}
	}
	printf("%d\n", sum);
	return (0);
}
