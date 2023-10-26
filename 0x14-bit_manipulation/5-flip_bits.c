#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
* @n: first Int
* @m: secind Int
*
* Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int count = 0;

	while (d)
	{
		if (d & 1)
			count++;
		d = d >> 1;
	}
	return (count);
}
