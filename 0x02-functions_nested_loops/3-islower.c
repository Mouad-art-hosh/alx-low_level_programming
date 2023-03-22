#include "main.h"

/**
 * _islwoer - function to prents lwoer case
 *
 * @c: parameter to be printed
 *
 * Return: 1 if c is a lower case
 * and 0 atherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
