#include <stdio.h>
/**
* main - Print all argument followed by a line.
* @argc: number of arguments
* @argv: array of arguments
* Return: return 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
