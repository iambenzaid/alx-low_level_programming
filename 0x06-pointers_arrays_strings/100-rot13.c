#include "main.h"
#include <stdio.h>

/**
 * rot13 - Function of encoder rot13
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data_1[] = "DhoQEyQBKkjOHKxFepkUaVEcZyarEKXscCmXxSxc";
	char data_rot[] = "QhhurPqSSKTlUCSolOwhPpjnRHiywqPSDvQCAlXv";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data_1[j])
			{
				s[i] = data_rot[j];
				break;
			}
		}
	}
	return (s);
}
