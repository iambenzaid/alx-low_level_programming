#include "main.h"
/**
* _strncpy - the function to copy a string.
* @dest: first string.
* @src: second String.
* @n: number of characters.
* Return: return dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, cmpt = 0;

	while (*(src + cmpt) != '\0')
		cmpt++;
	while (i < n)
	{
		if (i >= cmpt)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
