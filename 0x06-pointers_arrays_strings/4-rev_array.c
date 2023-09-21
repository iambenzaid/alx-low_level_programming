#include "main.h"

/**
 * reverse_array - the function that reverse an array of Integers.
 * @a: The array.
 * @n: number of element inside the array.
 *
 * Return : return result.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			tmp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = tmp;

		}
	}
}
