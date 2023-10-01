#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion -  function that print a string in reverse mode.
* @s : String.
* Return : 0.
*/

void _print_rev_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *(s + 0));
}
