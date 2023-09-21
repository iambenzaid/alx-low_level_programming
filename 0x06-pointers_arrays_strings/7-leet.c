#include "main.h"

/**
 * leet - function to uncode a string.
 * @str: the string to be uncoded.
 *
 * Return: return the value.
 */
char *leet(char *str)
{
	int i = 0, j;
	char cd[] = "b4Er9sKlm5DBq";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 14; j += 3)
		{
			if (*(str + i) == *(cd + j) || *(str + i) == *(cd + j + 1))
			{
				*(str + i) = *(cd + j + 2);
			}
		}
		i++;
	}
	return (str);
}
