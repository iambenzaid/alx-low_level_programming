#include "main.h"

/**
* factorial -  function that return the factorial of a given number.
* @n: the number.
* Return: return the factorial.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
