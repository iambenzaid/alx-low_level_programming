#include "main.h"
/**
* print_alphabet - prints the alphabet, in lowercase
*
* Return: Always return 0
*/
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
