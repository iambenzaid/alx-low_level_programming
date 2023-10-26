#include "main.h"

/**
* get_endianness -  checks the endianness
*
* Return: 0 or 1
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *end = (char *)&i;

	if (*end)
		return (1);
	return (0);
}
