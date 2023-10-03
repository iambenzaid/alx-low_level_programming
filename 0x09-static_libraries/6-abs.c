#include "main.h"

/**
*_abs - return number with absolute value
*@n: variable to be checked
*Return: abs 
*/

int _abs(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			return (n);
		}
		else
		{
			return (-n);
		}
	}
	else
	{
		return (0);
	}
}
