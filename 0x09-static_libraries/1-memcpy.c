#include "main.h"
/**
* _memcpy - fill memory bock with specific values
* @dest: string
* @src: string
* @n: integer
* Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
