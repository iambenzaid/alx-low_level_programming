#include "main.h"
#include <stdio.h>

/**
* _puts_recursion -  function that print a string followed by new line.
* @s: string.
*/

void _puts_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		printf("\n");
		return;
	}
	printf("%c", *(s + 0));
	_puts_recursion(s + 1);
}
