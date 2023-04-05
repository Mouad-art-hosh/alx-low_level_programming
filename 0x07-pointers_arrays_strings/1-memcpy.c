#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
<<<<<<< HEAD
		dest[r] = src[r];
		n--;
=======
	dest[r] = src[r];
	n--;
>>>>>>> 01d38cd90b4dfd7d4161da9f7f9c804bf8ab78a3
	}
	return (dest);
}
