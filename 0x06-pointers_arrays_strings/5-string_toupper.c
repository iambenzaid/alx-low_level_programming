#include "main.h"

/**
 * string_toupper - the function that change all the lowercases to uppercases.
 *
 * @str: the string
 *
 * Return: return in uppercase.
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) <= 122 && *(str + i) >= 97)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
