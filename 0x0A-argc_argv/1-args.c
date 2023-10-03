#include <stdio.h>
/**
* main - Print number of arguments, followed by a line.
* @argc: number of arguments
* @argv: array of arguments
* Return: return 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
