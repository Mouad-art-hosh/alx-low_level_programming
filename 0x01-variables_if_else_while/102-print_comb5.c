#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: always 0
 */

int main(void)
{
        int i;
        int j;

        for (i = 0 ; i < 10 ; i++)
        {
                for (j = 1 ; j < 10 ; j++)
                        {
                                if (i < j && j < k)
                                {
                                        putchar(i + '0');
                                        putchar(j + '0');
                                        if (i + j != 24)
                                        {
                                                putchar(',');
                                                putchar(' ');
                                        }
                                }
                        }
        }
        putchar('\n');
        return (0);
}