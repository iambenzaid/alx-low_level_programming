#include <stdio.h>

/**
*main - print all letters except q and e
*
*Return: return 0
*
*/

int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
