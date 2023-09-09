#include <stdio.h>

/**
*main - print the alphabets in lowercase then in uppercase
*
*Return: return 0
*/

int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
