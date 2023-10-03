#include <stdio.h>
#include "main.h"

/**
 * _putchar - write c to stdout
 * @c: Char to print
 *
 * Return: 1 if succeded
 * if error return -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
